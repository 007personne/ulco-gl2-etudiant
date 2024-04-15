#include "Tictactoe.hpp"
#include <sstream>

#include <catch2/catch.hpp>

TEST_CASE("Test Issue 1") { 
    Jeu jeu;

    REQUIRE( jeu.getCell(0, 0) == Cell::Vide);
    REQUIRE( jeu.getCell(0, 1) == Cell::Vide);
    REQUIRE( jeu.getCell(0, 2) == Cell::Vide);
    REQUIRE( jeu.getCell(1, 0) == Cell::Vide);
    REQUIRE( jeu.getCell(1, 1) == Cell::Vide);
    REQUIRE( jeu.getCell(1, 2) == Cell::Vide);
    REQUIRE( jeu.getCell(2, 0) == Cell::Vide);
    REQUIRE( jeu.getCell(2, 1) == Cell::Vide);
    REQUIRE( jeu.getCell(2, 2) == Cell::Vide);
}

TEST_CASE("Test Issue 2") { 
    Jeu jeu;

    REQUIRE(jeu.jouer(0, 0));
    REQUIRE(jeu.getCell(0, 0) == Cell::Rouge);

    REQUIRE(jeu.jouer(1, 1));
    REQUIRE(jeu.getCell(1, 1) == Cell::Vert);

    REQUIRE_FALSE(jeu.jouer(1, 1));

    REQUIRE(jeu.jouer(2, 2));
    REQUIRE(jeu.getCell(2, 2) == Cell::Rouge);

}

TEST_CASE("Test Issue 3") {
    Jeu jeu;

    REQUIRE(jeu.getStatus() == Status::RougeJoue);
    jeu.jouer(0, 0);
    REQUIRE(jeu.getStatus() == Status::VertJoue);
    jeu.jouer(0, 1);
    REQUIRE(jeu.getStatus() == Status::RougeJoue);
    jeu.jouer(1, 0);
    REQUIRE(jeu.getStatus() == Status::VertJoue);
    jeu.jouer(0, 2);
    REQUIRE(jeu.getStatus() == Status::RougeJoue);
    jeu.jouer(2, 0);
    REQUIRE(jeu.getStatus() == Status::RougeGagne);

    jeu.raz();

    REQUIRE(jeu.getStatus() == Status::RougeJoue);
    jeu.jouer(0, 0);
    REQUIRE(jeu.getStatus() == Status::VertJoue);
    jeu.jouer(0, 1);
    REQUIRE(jeu.getStatus() == Status::RougeJoue);
    jeu.jouer(1, 0);
    REQUIRE(jeu.getStatus() == Status::VertJoue);
    jeu.jouer(1, 1);
    REQUIRE(jeu.getStatus() == Status::RougeJoue);
    jeu.jouer(2, 2);
    REQUIRE(jeu.getStatus() == Status::VertJoue);
    jeu.jouer(1, 2);
    REQUIRE(jeu.getStatus() == Status::VertGagne);
}