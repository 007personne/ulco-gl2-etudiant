#include "Tictactoe.hpp"
#include <iostream>

using namespace std;

int main() {
    Jeu jeu;

    std::string cli;
    int i, j;

    //while (true) { //Décomenter pour partie infinie

        while (jeu.getStatus() == Status::RougeJoue or jeu.getStatus() == Status::VertJoue) {
            std::cout << "Nouvelle patrtie :" << std::endl;
            std::cout << jeu << std::endl;

            if (jeu.getStatus() == Status::RougeJoue) {
                std::cout << "rouge joue" << std::endl;
            } else {
                std::cout << "vert joue" << std::endl;
            }

            std::cout << "Entrer une position ex(1 1) : ";
            std::getline(std::cin, cli);

            if (cli.length() < 2 or cli.length() > 4) {
                std::cout << "Entrer incorect" << std::endl;
            } else {
                i = cli[0] - '0';
                j = cli[2] - '0';
                std::cout << i << ";" << j << std::endl;
                if (!jeu.jouer(i, j)) {
                   std::cout << "Coup  invalide" << std::endl;
                }
            }
        }

        if (jeu.getStatus() == Status::Egalite) {
            std::cout << "Partie fini : Egalité" << std::endl;
        } else if (jeu.getStatus() == Status::RougeGagne) {
            std::cout << "Partie fini : Victoire de rouge" << std::endl;
        } else {
            std::cout << "Partie fini : Victoire de vert" << std::endl;
        }

        jeu.raz();
    //}
    

    return 0;
}

