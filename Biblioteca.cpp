//
// Created by lica-pc on 9/18/19.
//
#include <vector>
#include "Biblioteca.h"
#include "Libro.h"

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

