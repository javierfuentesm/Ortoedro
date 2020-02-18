#include <iostream>
#import "Ortoedro.h"


int main() {
    Ortoedro ortoedro(Coordenada(0, 0, 0), Coordenada(3, 8, 1));
    ortoedro.obtieneVertices();
    ortoedro.obtieneArea();
    ortoedro.obtieneVolumen();
    return 0;
}
