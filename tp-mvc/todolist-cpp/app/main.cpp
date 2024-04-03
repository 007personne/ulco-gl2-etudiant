#include <todolist-cpp/View.hpp>


#include <iostream>

int main() {

    Task t {1, "Task N°1"};
    std::cout << showTask(t) << std::endl;

    Board b;
    b.addTodo("Task N°1");
    b.addTodo("Task N°2");

    
    //std::cout << printBoard(b);


    return 0;
}

