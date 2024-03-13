#pragma once

#include "Board.hpp"
#include "Itemable.hpp"

#include <fstream>
#include <iostream>

class ReportStdout {


public:
    ReportStdout() {}

    void reportStdout(Board& items) {
        for (const auto & item : items.getItems())
            std::cout << item << std::endl;
        std::cout << std::endl;
    }

};