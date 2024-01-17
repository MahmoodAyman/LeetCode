/**
 * @return {Function}
 */
var createHelloWorld = function() {
    return function(...args) {
        let x = "Hello World";
        return x;
    }
};

/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */