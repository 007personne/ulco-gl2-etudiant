#include <todolist-cpp/Board.hpp>

#include <catch2/catch.hpp>

TEST_CASE( "test board 1" ) { 
    Board b;
    REQUIRE(b._todo.size() == 0);
    REQUIRE(b._done.size() == 0);
}

TEST_CASE( "test board 2" ) { 
    Board b;
    b.addTodo("test1");
    REQUIRE(b._todo.size() == 1);
    REQUIRE(b._done.size() == 0);
}

TEST_CASE( "test board 3" ) { 
    Board b;
    b.addTodo("test1");
    REQUIRE(b._todo.size() == 1);
    REQUIRE(b._done.size() == 0);

    b.toDone(1);
    REQUIRE(b._todo.size() == 0);
    REQUIRE(b._done.size() == 1);
}

