/**
 * @param {Array<Function>} functions
 * @return {Promise<any>}
 */
var promiseAll = function(functions) {
    return new Promise((resolve,reject)=>{
    const arr=[]
    let len=functions.length
    for(let i=0;i<len;i++){
        functions[i]().then((response)=>{
            arr[i]=response
            len--
            if(len==0){
                return resolve(arr)
            }
        }).catch((e)=>{
            reject(e)
        })
    }
})
};

/**
 * const promise = promiseAll([() => new Promise(res => res(42))])
 * promise.then(console.log); // [42]
 */