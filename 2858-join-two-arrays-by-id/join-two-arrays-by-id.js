/**
 * @param {Array} arr1
 * @param {Array} arr2
 * @return {Array}
 */
var join = function(arr1, arr2) {
    // Map to store merged objects by id
    let map = new Map();

    // Add elements from arr1
    for (let obj of arr1) {
        map.set(obj.id, obj);
    }

    // Merge elements from arr2
    for (let obj of arr2) {
        if (map.has(obj.id)) {
            // Merge properties, arr2 overrides arr1
            map.set(obj.id, {...map.get(obj.id), ...obj});
        } else {
            map.set(obj.id, obj);
        }
    }

    // Convert map values to array and sort by id
    return Array.from(map.values()).sort((a, b) => a.id - b.id);
};
