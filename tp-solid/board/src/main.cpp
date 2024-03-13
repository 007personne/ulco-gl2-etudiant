#include "ReportFile.hpp"
#include "ReportStdout.hpp"
#include "NumBoard.hpp"


void testBoard(Board & b, Reportable& r) {
    std::cout << b.getTitle() << std::endl;
    b.add("item 1");
    b.add("item 2");
    r.report(b);
}

void testNumBoard(NumBoard & b, Reportable& r) {
    std::cout << b.getTitle() << std::endl;
    b.addNum("item 1");
    b.addNum("item 2");
    r.report(b);
}

int main() {

    Board b1;
    NumBoard b2;
    ReportFile r1("tmp.txt");
    ReportStdout r2;


    testBoard(b1, r1);
    testBoard(b1, r2);
    testNumBoard(b2, r1);
    testNumBoard(b2, r2);
    testBoard(b2, r1);
    testBoard(b2, r2);

    return 0;
}

