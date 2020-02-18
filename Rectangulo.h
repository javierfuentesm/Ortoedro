//
// Created by Javier Fuentes Mora on 17/02/20.
//

#ifndef ORTOEDRO_RECTANGULO_H
#define ORTOEDRO_RECTANGULO_H

#include "Coordenada.h"
class Rectangulo
{
private:
    Coordenada superiorIzq;
    Coordenada inferiorDer;
public:
    Rectangulo();
    Rectangulo(double xSupIzq, double ySupIzq, double zSupIzq, double xInfDer, double yInfDer, double zInfDer);
    void imprimeEsq();
    Coordenada obtieneSupIzq();
    Coordenada obtieneInfDer();
    double obtenerArea();

};


#endif //ORTOEDRO_RECTANGULO_H
