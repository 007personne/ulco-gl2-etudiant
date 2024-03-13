#pragma once

#include "Board.hpp"
#include "Reportable.hpp"

class ReportFile: public Reportable {

private:
    std::ofstream _ofs;

public:
    
    ReportFile(const std::string & filename) : _ofs(filename) {}

    void report(Board& items) override {
        for (const auto item : items.getItems())
            _ofs << item << std::endl;
        _ofs << std::endl;    
    }

};