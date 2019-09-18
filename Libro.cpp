//
// Created by lica-pc on 9/18/19.
//

#include "Libro.h"

Libro::Libro(const string& nombre, int numVol, int numLibros) : Volumen(nombre, numVol), numLibros(numLibros) {
    this->numLibros = numLibros;
}

void Libro::mostrar(){
    Volumen::mostrar();
    cout << "Número de libros: "<<numLibros << endl;
}



