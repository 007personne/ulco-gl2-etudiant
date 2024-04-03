#include <todolist-cpp/View.hpp>

#include <catch2/catch.hpp>
#include <sstream>

TEST_CASE( "test view" ) {
    Task t {1, "Test task 1"};
    REQUIRE( showTask(t) == "1. Test task 1" );
    
}

TEST_CASE( "test view 2" ) {
    Board b;
    std::ostringstream ost;
    //printBoard(ost, b);
    //REQUIRE( ost.str() == "Todo:\nDone\n" );
    
}