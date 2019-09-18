//
// Created by lica-pc on 9/18/19.
//

#include "Volumen.h"

Volumen::Volumen(const string& nombre, int numVol) {
    this->nombre = nombre;
    this->numVol = numVol;
}

void Volumen::mostrar() {
    cout <<"Nombre del Volúmen: "<< nombre << endl;
    cout <<"Número del Volúmen: "<<numVol << endl;
}

