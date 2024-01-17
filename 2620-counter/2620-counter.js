/**
 * @param {number} n
 * @return {Function} counter
 */
var createCounter = function(n) {
    let cur = n - 1;
    return function() {
        return ++cur;
    };
};

/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */