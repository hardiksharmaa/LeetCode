/**
 * @param {Array} arr
 * @param {number} depth
 * @return {Array}
 */
var flat = function (arr, n) {
    if(n===0) return arr
    else{
    const ans=[]
    arr.forEach((ele)=>{
        if(Array.isArray(ele)){
            ans.push(...flat(ele,n-1));
        }
        else ans.push(ele);
    })
    return ans;
    }
};