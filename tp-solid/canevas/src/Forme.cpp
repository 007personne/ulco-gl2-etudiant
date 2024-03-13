#include "Forme.hpp"

Disque::Disque(double rayon) :
    _rayon(rayon)
{}

float Disque::aire() const {
    return _rayon * 2 * M_PI;
}

Description Disque::toDescription() const {
    Description des;

    /*
    os << "  {\n";
    os << "    \"name\": \"Disque\",\n";
    os << "    \"rayon\": \"" << disque->_rayon << "\"\n";
    os << "  }";*/
    return des;
}

Rectangle::Rectangle(double largeur, double hauteur) :
    _largeur(largeur), _hauteur(hauteur)
{}

float Rectangle::aire() const {
    return _largeur * _hauteur;
}

Description Rectangle::toDescription() const {/*
    os << "  {\n";
    os << "    \"name\": \"Rectangle\",\n";
    os << "    \"largeur\": \"" << rectangle->_largeur << "\",\n";
    os << "    \"hauteur\": \"" << rectangle->_hauteur << "\"\n";
    os << "  }";*/
}



/*
void Canevas::exportFormeJSON(std::ostream & os, const Forme * f) const {

    auto disque = dynamic_cast<const Disque*>(f);
    if (disque) {
        os << "  {\n";
        os << "    \"name\": \"Disque\",\n";
        os << "    \"rayon\": \"" << disque->_rayon << "\"\n";
        os << "  }";
        return;
    }

    auto rectangle = dynamic_cast<const Rectangle*>(f);
    if (rectangle) {
        
        return;
    }

}
*/