#include <todolist-cpp/Task.hpp>
#include <todolist-cpp/View.hpp>
#include <todolist-cpp/Board.hpp>

#include <iostream>

int main() {

    Task t {1, "Task N°1"};
    std::cout << showTask(t) << std::endl;

    Board b;
    b.addTodo("Task N°1");
    b.addTodo("Task N°2");

    

    return 0;
}

