#include "Tictactoe.hpp"

using namespace std;

int main() {
    Jeu jeu;

    cout << jeu << endl;

    
    jeu.jouer(0, 0);
    cout << jeu << endl;
    jeu.jouer(0, 1);
    cout << jeu << endl;
    jeu.jouer(1, 0);
    cout << jeu << endl;
    jeu.jouer(0, 2);
    cout << jeu << endl;
    jeu.jouer(2, 0);
    cout << jeu << endl;

    return 0;
}

