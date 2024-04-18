#ifndef TICTACTOE_HPP
#define TICTACTOE_HPP

#include <array>
#include <iostream>

enum class Status { Egalite, RougeGagne, VertGagne, RougeJoue, VertJoue };

enum class Cell { Vide, Rouge, Vert };

// Moteur de jeu de tictactoe.
class Jeu {
private:
    std::array<std::array<Cell, 3>, 3> _plateau;
    bool _tourRouge;
    Status _stat;

public:
    /// \brief Constructeur à utiliser.
    ///
    Jeu();

    /// \brief Retourne le status du jeu courant.
    ///
    /// Entre : Egalite, RougeGagne, VertGagne, RougeJoue, VertJoue.
    Status getStatus() const;

    /// \brief Retourne l'état d'une case du plateau
    ///
    /// Ente : Vide, Rouge, Vert.
    Cell getCell(int i, int j) const;

    /// \brief Joue un coup pour le joueur courant.
    /// 
    /// i ligne choisie (0, 1 ou 2)
    /// j colonne choisie (0, 1 ou 2)
    /// 
    /// Si le coup est invalide, retourne false. Si le coup est valide, joue le coup et retourne true.
    bool jouer(int i, int j);

    /// \brief Réinitialise le jeu.
    void raz();

    
private:
    bool vic();
    bool egal();
};

/// \brief Sucherge de l'operateur << (sort la grille du jeu)
/// 
/// Permet d'afficher la grille de jeu avec :
/// std::cout << jeu;

std::ostream & operator<<(std::ostream & os, const Jeu & jeu);


#endif

