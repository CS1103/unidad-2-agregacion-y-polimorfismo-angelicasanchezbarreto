//
// Created by lica-pc on 9/18/19.
//

#ifndef POLIMORFISMO_LIBRO_H
#define POLIMORFISMO_LIBRO_H

class Libro : public Volumen{
private:
    int numLibros;
public:
    Libro(const string&, int, int);
    void mostrar() override;
    ~Libro()= default;
};


#endif //POLIMORFISMO_LIBRO_H
