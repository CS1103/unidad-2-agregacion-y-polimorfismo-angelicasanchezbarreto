//
// Created by lica-pc on 9/18/19.
//

#ifndef POLIMORFISMO_VOLUMEN_H
#define POLIMORFISMO_VOLUMEN_H


#include <string>
#include <iostream>

using namespace std;

class Volumen {
protected:
    string nombre;
    int numVol;
public:
    Volumen(const string&, int);
    virtual void mostrar();
    ~Volumen()= default;
};


#endif //POLIMORFISMO_VOLUMEN_H
