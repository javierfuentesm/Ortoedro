//
// Created by Javier Fuentes Mora on 17/02/20.
//

#include "Coordenada.h"

Coordenada::Coordenada(double x, double y, double z) : x(x), y(y), z(z) {}

double Coordenada::getX() const {
    return x;
}

double Coordenada::getY() const {
    return y;
}

double Coordenada::getZ() const {
    return z;
}
