#pragma once

#include "Board.hpp"
#include "Reportable.hpp"

class ReportStdout: public Reportable {

public:

    void report(Board& items) override {
        for (const auto & item : items.getItems())
            std::cout << item << std::endl;
        std::cout << std::endl;
    }
};