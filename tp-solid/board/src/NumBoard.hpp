#pragma once

#include "Board.hpp"

class NumBoard: public Board {
private:
    int _nbtasks;

public:
    NumBoard(): _nbtasks(0) {}

    void addNum(const std::string & t) {
        _nbtasks++;
        add(std::to_string(_nbtasks) + "." + t);
    }
};