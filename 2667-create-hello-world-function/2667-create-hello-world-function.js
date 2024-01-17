/**
 * @return {Function}
 */
function createHelloWorld() {
    const h = "Hello ";
    return function createWorld(){
        return h + "World";
    }
}

/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */