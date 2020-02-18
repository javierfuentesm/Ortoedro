//
// Created by Javier Fuentes Mora on 17/02/20.
//

#include <iostream>
#include "Ortoedro.h"

using namespace std;

Ortoedro::Ortoedro(Coordenada coor1, Coordenada coor2) :
        primero(coor1.getX(), coor1.getY(), coor1.getZ(), coor2.getX(), coor2.getY(), coor2.getZ()),
        segundo(coor2.getX(), coor1.getY(), coor1.getZ(), coor2.getX(), coor2.getY(), coor2.getZ()),
        tercero(coor1.getX(), coor1.getY(), coor2.getZ(), coor2.getX(), coor2.getY(), coor2.getZ()),
        cuarto(coor1.getX(), coor1.getY(), coor1.getZ(), coor1.getX(), coor2.getY(), coor2.getZ()),
        quinto(coor1.getX(), coor1.getY(), coor1.getZ(), coor2.getY(), coor1.getY(), coor2.getZ()),
        sexto(coor1.getX(), coor2.getY(), coor1.getZ(), coor2.getX(), coor2.getY(), coor2.getZ()) {}

double Ortoedro::obtieneVertices() {
    cout << "x = " << primero.getInfIzq().getX() << " y = " << primero.getInfIzq().getY() << " z = " << primero.getInfIzq().getZ() << endl;
    cout << "x = " << primero.getSupDer().getX() << " y = " << primero.getSupDer().getY() << " z = " << primero.getSupDer().getZ() << endl;
    cout << "x = " << segundo.getInfIzq().getX() << " y = " << segundo.getInfIzq().getY() << " z = " << segundo.getInfIzq().getZ() << endl;
    cout << "x = " << segundo.getSupDer().getX() << " y = " << segundo.getSupDer().getY() << " z = " << segundo.getSupDer().getZ() << endl;
    cout << "x = " << tercero.getInfIzq().getX() << " y = " << tercero.getInfIzq().getY() << " z = " << tercero.getInfIzq().getZ() << endl;
    cout << "x = " << sexto.getInfIzq().getX() << " y = " << sexto.getInfIzq().getY() << " z = " << sexto.getInfIzq().getZ() << endl;
    cout << "x = " << cuarto.getSupDer().getX() << " y = " << cuarto.getSupDer().getY() << " z = " << cuarto.getSupDer().getZ() << endl;
    cout << "x = " << quinto.getSupDer().getX() << " y = " << quinto.getSupDer().getY() << " z = " << quinto.getSupDer().getZ() << endl;
}

double Ortoedro::obtieneArea() {
    double a= -primero.getInfIzq().getX() + segundo.getInfIzq().getX();
    double b= -primero.getInfIzq().getZ() + tercero.getInfIzq().getZ();
    double h= -primero.getInfIzq().getY() + sexto.getInfIzq().getY();

    const double area = 2 * (a * b + a * h + b * h);

    cout << "El area calculada es : " << area << endl;
}

double Ortoedro::obtieneVolumen() {
    double a= -primero.getInfIzq().getX() + segundo.getInfIzq().getX();
    double b= -primero.getInfIzq().getZ() + tercero.getInfIzq().getZ();
    double h= -primero.getInfIzq().getY() + sexto.getInfIzq().getY();
    const double volumen = a * b * h;

    cout << "El volumen  es: " << volumen << endl;
}

