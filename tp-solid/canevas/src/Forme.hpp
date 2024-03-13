#pragma once

#include <cmath>
#include <numeric>
#include <map>


using Description = std::map<std::string, std::string>;

class Descriptible {
    virtual Description toDescription() const = 0;
};

class Forme: public Descriptible {
    public:
        virtual ~Forme() = default;
        virtual float aire() const = 0;
};

class Disque : public Forme {
    private:
        double _rayon;
    public:

        Disque(double rayon);
        float aire() const override;
        Description toDescription() const override;
};

class Rectangle : public Forme {
    private:
        double _largeur;
        double _hauteur;

    public:
        Rectangle(double largeur, double hauteur);
        float aire() const override;
        Description toDescription() const override;

};

