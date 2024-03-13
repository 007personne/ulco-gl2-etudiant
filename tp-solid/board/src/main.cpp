#include "ReportFile.hpp"
#include "ReportStdout.hpp"
#include "Board.hpp"

void testBoard(Board & b, ReportFile & r1, ReportStdout & r2) {
    std::cout << b.getTitle() << std::endl;
    b.add("item 1");
    b.add("item 2");
    r2.reportStdout(b);
    r1.reportFile(b);
}

int main() {

    Board b1;
    ReportFile r1("../tmp.txt");
    ReportStdout r2;

    testBoard(b1, r1, r2);

    return 0;
}

