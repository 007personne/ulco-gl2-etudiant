#include <todolist-cpp/Board.hpp>

void Board::addTodo(std::string desc) {
    Task t {_nextId, desc};
    _nextId++;
    _todo.push_back(std::move(t));    
}