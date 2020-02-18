//
// Created by Javier Fuentes Mora on 17/02/20.
//

#include "Rectangulo.h"
#include <iostream>

using namespace std;

Rectangulo::Rectangulo() : superiorIzq(0, 0, 0), inferiorDer(0, 0, 0) {}

Rectangulo::Rectangulo(double xSupIzq, double ySupIzq, double zSupIzq, double xInfDer, double yInfDer, double zInfDer)
        : superiorIzq(xSupIzq, ySupIzq, zSupIzq), inferiorDer(xInfDer, yInfDer, zInfDer) {}

void Rectangulo::imprimeEsq() {
    cout << "Para la esquina superior izquierda.\n";
    cout << "x = " << superiorIzq.getX() << " y = " << superiorIzq.getY() << " z = " << superiorIzq.getZ() << endl;
    cout << "Para la esquina inferior derecha.\n";
    cout << "x = " << inferiorDer.getX() << " y = " << inferiorDer.getY() << " z = " << inferiorDer.getZ() << endl;
}

Coordenada Rectangulo::getInfIzq() {
    return superiorIzq;
}

Coordenada Rectangulo::getSupDer() {
    return inferiorDer;
}
