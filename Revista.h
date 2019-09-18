//
// Created by lica-pc on 9/18/19.
//

#ifndef POLIMORFISMO_REVISTA_H
#define POLIMORFISMO_REVISTA_H

class Revista : public Volumen{
private:
    int numRevistas;
public:
    Revista(const string&, int, int);
    void mostrar() override;
    ~Revista()= default;

};


#endif //POLIMORFISMO_REVISTA_H
