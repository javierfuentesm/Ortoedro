//
// Created by Javier Fuentes Mora on 17/02/20.
//

#ifndef ORTOEDRO_COORDENADA_H
#define ORTOEDRO_COORDENADA_H

class Coordenada{
private:
    double x;
    double y;
    double z;
public:
    Coordenada(double = 0, double = 0);

    Coordenada(double x, double y, double z);

    double getX() const;

    double getY() const;

    double getZ() const;
};



#endif //ORTOEDRO_COORDENADA_H
