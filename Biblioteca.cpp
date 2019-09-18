//
// Created by lica-pc on 9/18/19.
//
#include <vector>
#include "Biblioteca.h"
#include "Libro.h"
#include "Revista.h"

Biblioteca::Biblioteca() {
    Biblioteca* biblioteca = nullptr;
}


Volumen *Biblioteca::incluir(Volumen *& Vol) {
    volumenes->push_back(Vol);
    return Vol;
}

void Biblioteca::mostrarBiblioteca() {
        for(Volumen* volumen2 : *volumenes)
            volumen2->mostrar();
}

int Biblioteca::cantidad() {
    for(auto volumen2: *volumenes){
        if(typeid(*volumen2) == typeid(Libro))
            maxLibros++;
        else if(typeid(*volumen2) == typeid(Revista))
            maxRevistas++;
    }
    cout << "Cantidad de libros: "<<maxLibros<<endl;
    cout << "Cantidad de revistas: "<<maxRevistas;
    return 0;
}
