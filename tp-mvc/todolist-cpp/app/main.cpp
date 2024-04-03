#include <todolist-cpp/Task.hpp>
#include <todolist-cpp/View.hpp>

#include <iostream>

int main() {

    Task t {1, "Task N°1"};
    std::cout << showTask(t) << std::endl;

    return 0;
}

