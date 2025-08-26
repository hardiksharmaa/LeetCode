/**
 * @param {Function} fn
 * @return {Function}
 */
function memoize(fn) {
    const cache={};
    return function(...args) {
        const val=args;
        if(val in cache){
            return cache[val];
        }
        else{
            const ans=fn(...args)
            cache[val]=ans;
            return ans
        }
    }
}


/** 
 * let callCount = 0;
 * const memoizedFn = memoize(function (a, b) {
 *	 callCount += 1;
 *   return a + b;
 * })
 * memoizedFn(2, 3) // 5
 * memoizedFn(2, 3) // 5
 * console.log(callCount) // 1 
 */