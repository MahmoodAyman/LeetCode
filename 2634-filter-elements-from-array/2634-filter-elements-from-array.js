/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    const filteredArr = [];
    for(let i = 0; i<arr.length; i++){
        const truthy = (fn(arr[i],i));
        if(truthy)
            filteredArr.push(arr[i]);
    }
    return filteredArr;
};