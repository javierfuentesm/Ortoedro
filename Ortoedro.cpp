//
// Created by Javier Fuentes Mora on 17/02/20.
//

#include <iostream>
#include "Ortoedro.h"
using namespace std;

Ortoedro::Ortoedro(Coordenada coor1, Coordenada coor2) :
        primero(coor1.getX(),coor1.getY(),coor1.getZ(),coor2.getX(),coor2.getY(),coor2.getZ()),
        segundo(coor2.getX(),coor1.getY(),coor1.getZ(),coor2.getX(),coor2.getY(),coor2.getZ()),
        tercero(coor1.getX(),coor1.getY(),coor2.getZ(),coor2.getX(),coor2.getY(),coor2.getZ()),
        cuarto(coor1.getX(),coor1.getY(),coor1.getZ(),coor1.getX(),coor2.getY(),coor2.getZ()),
        quinto(coor1.getX(),coor1.getY(),coor1.getZ(),coor2.getY(),coor1.getY(),coor2.getZ()),
        sexto(coor1.getX(),coor2.getY(),coor1.getZ(),coor2.getX(),coor2.getY(),coor2.getZ()) {}

double Ortoedro::obtieneVertices() {
    cout << "x = " << primero.obtieneInfDer().getX() << " y = " << primero.obtieneInfDer().getY()  << " z = "<<primero.obtieneInfDer().getZ()<<endl;
    cout << "x = " << primero.obtieneSupIzq().getX() << " y = " << primero.obtieneSupIzq().getY()  << " z = "<<primero.obtieneSupIzq().getZ()<<endl;
    cout << "x = " << segundo.obtieneInfDer().getX() << " y = " << segundo.obtieneInfDer().getY()  << " z = "<<segundo.obtieneInfDer().getZ()<<endl;
    cout << "x = " << segundo.obtieneSupIzq().getX() << " y = " << segundo.obtieneSupIzq().getY()  << " z = "<<segundo.obtieneSupIzq().getZ()<<endl;
    cout << "x = " << tercero.obtieneInfDer().getX() << " y = " << tercero.obtieneInfDer().getY()  << " z = "<<tercero.obtieneInfDer().getZ()<<endl;
    cout << "x = " << sexto.obtieneInfDer().getX() << " y = " << sexto.obtieneInfDer().getY()  << " z = "<<sexto.obtieneInfDer().getZ()<<endl;
    cout << "x = " << cuarto.obtieneSupIzq().getX() << " y = " << cuarto.obtieneSupIzq().getY()  << " z = "<<cuarto.obtieneSupIzq().getZ()<<endl;
    cout << "x = " << quinto.obtieneSupIzq().getX() << " y = " << quinto.obtieneSupIzq().getY()  << " z = "<<quinto.obtieneSupIzq().getZ()<<endl;}

double Ortoedro::obtieneArea() {
    return 0;
}

double Ortoedro::obtieneVolumen() {
    return 0;
}

