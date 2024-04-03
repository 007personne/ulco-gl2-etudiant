#include <todolist-cpp/Board.hpp>

Board::Board():_nextId(1){}

void Board::addTodo(std::string desc) {
    Task t {_nextId, desc};
    _nextId++;
    _todo.push_back(std::move(t));    
}

void Board::toDone(const int id) {
    for(auto it = _todo.begin();it != _todo.end();){
        if(it->_id == id) {
            _done.push_back({id, it->_name});
            it = _todo.erase(it);
        } else {
            ++it;
        }
    }
}