//
// Created by lica-pc on 9/18/19.
//

#ifndef POLIMORFISMO_BIBLIOTECA_H
#define POLIMORFISMO_BIBLIOTECA_H

#include <vector>
#include "Volumen.cpp"

class Biblioteca {
    int maxLibros;
    int maxRevistas;
    vector<Volumen*> *volumenes = new vector<Volumen*>();
public:
    Biblioteca();
    void mostrarBiblioteca();
    int cantidad();
    Volumen* incluir(Volumen*&);
    ~Biblioteca()= default;
};


#endif //POLIMORFISMO_BIBLIOTECA_H
