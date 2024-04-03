#include <todolist-cpp/View.hpp>

#include <catch2/catch.hpp>

TEST_CASE( "test view" ) {
    Task t {1, "Test task 1"};
    REQUIRE( showTask(t) == "1. Test task 1" );
    
}

