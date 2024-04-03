#include <todolist-cpp/Task.hpp>

#include <list>

class Board {
private:
    int _nextId;

public:
    std::list<Task> _todo;
    std::list<Task> _done;

public:
    Board();
    void addTodo(std::string);
    void toDone(const int id);


};