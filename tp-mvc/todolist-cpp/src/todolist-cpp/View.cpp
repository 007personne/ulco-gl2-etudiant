#include <todolist-cpp/View.hpp>

#include <ostream>

std::string showTask(const Task& t) {
    return std::to_string(t._id) + ". " + t._name;
}

std::string printBoard(const Board& b) {
    std::string str = "Todo:\n";
    for(auto t : b._todo){
        str = str + showTask(t) + "\n";
    }
    str = str + "Done:\n";
    for(auto d : b._done){
        str = str + showTask(d) + "\n";
    }
}