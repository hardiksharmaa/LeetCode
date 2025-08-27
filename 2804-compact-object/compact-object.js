var compactObject = function(obj) {
    if (!obj) return obj; // return if falsy (null, false, 0, "")
    if (typeof obj !== "object") return obj; // return primitive values

    if (Array.isArray(obj)) {
        return obj
            .map(ele => compactObject(ele)) // recursively compact
            .filter(Boolean);               // remove falsy values
    }

    const res = {};
    for (let key in obj) {
        const val = compactObject(obj[key]); 
        if (val) {  // only keep truthy values
            res[key] = val;
        }
    }
    return res;
};
