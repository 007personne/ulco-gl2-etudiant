#pragma once

#include "Board.hpp"

class Reportable {
    virtual void report(Board& item) = 0;
};