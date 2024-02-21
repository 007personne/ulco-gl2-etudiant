#include <cassert>

int fiboNaive(int n) {
    assert(n => 0);
    return n < 2 ? n : fiboNaive(n-1) + fiboNaive(n-2);
}

int fiboIterative(int n) {
    if (n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    int current = 1;
    int x = 0; 
    int y = 1;
    while (current != n){
        current++;
        int temps = x + y;
        x = y;
        y = temps;
    }
    return y;
}


#include <pybind11/pybind11.h>

PYBIND11_MODULE(myfibo, m) {

    m.def("fibo_naive", &fiboNaive, "fibo");

    m.def("fibo_iterative", &fiboIterative, "fibo2");

}

