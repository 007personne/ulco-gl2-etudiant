
function mul2(n) {
    return n*2;
}

function make_handler(n, name) {
    return function () {
        name.innerHTML = mul2(n.value);
    };
}

