#include "Tictactoe.hpp"

Jeu::Jeu() {
    raz();
}

Status Jeu::getStatus() const {
    return _stat;
}

Cell Jeu::getCell(int i, int j) const {
    return _plateau[i][j];
}

std::ostream & operator<<(std::ostream & os, const Jeu & jeu) {
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++) {
            auto cell = jeu.getCell(i, j);
            if (cell == Cell::Vide) {
                os << '_';
            } else if (cell == Cell::Rouge) {
                os << 'R';
            } else {
                os << 'V';
            }
        }
        os << std::endl;
    }
    return os;
}

bool Jeu::vic() {
    if (_plateau[0][0] == _plateau[0][1] and _plateau[0][1] == _plateau[0][2] and _plateau[0][0] != Cell::Vide) {return true;}
    if (_plateau[1][0] == _plateau[1][1] and _plateau[1][1] == _plateau[1][2] and _plateau[1][0] != Cell::Vide) {return true;}
    if (_plateau[2][0] == _plateau[2][1] and _plateau[2][1] == _plateau[2][2] and _plateau[2][0] != Cell::Vide) {return true;}

    if (_plateau[0][0] == _plateau[1][0] and _plateau[1][0] == _plateau[2][0] and _plateau[0][0] != Cell::Vide) {return true;}
    if (_plateau[0][1] == _plateau[1][1] and _plateau[1][1] == _plateau[2][1] and _plateau[0][1] != Cell::Vide) {return true;}
    if (_plateau[0][2] == _plateau[1][2] and _plateau[1][2] == _plateau[2][2] and _plateau[0][2] != Cell::Vide) {return true;}

    if (_plateau[0][0] == _plateau[1][1] and _plateau[1][1] == _plateau[2][2] and _plateau[0][0] != Cell::Vide) {return true;}
    if (_plateau[0][2] == _plateau[1][1] and _plateau[1][1] == _plateau[2][0] and _plateau[0][2] != Cell::Vide) {return true;}

    return false;
}

bool Jeu::egal() {
    if (_plateau[0][0] == Cell::Vide) {return false;}
    if (_plateau[0][1] == Cell::Vide) {return false;}
    if (_plateau[0][2] == Cell::Vide) {return false;}

    if (_plateau[1][0] == Cell::Vide) {return false;}
    if (_plateau[1][1] == Cell::Vide) {return false;}
    if (_plateau[1][2] == Cell::Vide) {return false;}

    if (_plateau[2][0] == Cell::Vide) {return false;}
    if (_plateau[2][1] == Cell::Vide) {return false;}
    if (_plateau[2][2] == Cell::Vide) {return false;}
    return true;
}

bool Jeu::jouer(int i, int j) {

    if (0 <= i <= 2) {
        if (0 <= j <=2) {
            auto stat = getStatus();
            if (_stat == Status::RougeJoue or _stat == Status::VertJoue) {
                if (getCell(i, j) == Cell::Vide) {
                    if (_tourRouge){
                        _plateau[i][j] = Cell::Rouge;
                    } else {
                        _plateau[i][j] = Cell::Vert;
                    }
                    
                    if (vic()) {
                        if (_tourRouge) {
                            _stat = Status::RougeGagne;
                        } else {
                            _stat = Status::VertGagne;
                        }
                    } else if (egal()) {
                        _stat = Status::Egalite;
                    } else {                        
                        _tourRouge = !_tourRouge;
                        if (_tourRouge) {
                            _stat = Status::RougeJoue;
                        } else {
                            _stat = Status::VertJoue;
                        }
                    }
                    return true;
                }
            }
        }
    }
    return false;
}

void Jeu::raz() {
    _tourRouge = true;
    _stat = Status::RougeJoue;
    _plateau[0] = {Cell::Vide, Cell::Vide, Cell::Vide};
    _plateau[1] = {Cell::Vide, Cell::Vide, Cell::Vide};
    _plateau[2] = {Cell::Vide, Cell::Vide, Cell::Vide};
}

