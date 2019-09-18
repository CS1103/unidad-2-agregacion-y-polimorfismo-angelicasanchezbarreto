//
// Created by lica-pc on 9/18/19.
//

#include "Revista.h"

Revista::Revista(const string& nombre, int numVol, int numRevistas) : Volumen(nombre, numVol), numRevistas(numRevistas) {
    this->numRevistas = numRevistas;
}

void Revista::mostrar() {
    Volumen::mostrar();
    cout <<"Número de revistas: "<<numRevistas << endl;
}


