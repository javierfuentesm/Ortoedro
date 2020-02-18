//
// Created by Javier Fuentes Mora on 17/02/20.
//

#ifndef ORTOEDRO_ORTOEDRO_H
#define ORTOEDRO_ORTOEDRO_H
#include "Rectangulo.h"


class Ortoedro {
private:
    Rectangulo primero;
    Rectangulo segundo;
    Rectangulo tercero;
    Rectangulo cuarto;
    Rectangulo quinto;
    Rectangulo sexto;
public:
    Ortoedro(Coordenada coor1,Coordenada coor2);
    double obtieneVertices();
    double obtieneArea();
    double obtieneVolumen();

};


#endif //ORTOEDRO_ORTOEDRO_H
