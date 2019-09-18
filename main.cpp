#include <iostream>
#include "Biblioteca.cpp"
#include "Libro.cpp"
#include "Revista.cpp"

using namespace std;

int main() {
    Biblioteca* biblioteca;
    biblioteca = new Biblioteca;
    Volumen* Programacion = new Libro("Programación", 3, 7);
    Volumen* BaseDeDatos = new Libro("Base de datos", 6, 3);
    Volumen* Teoria = new Libro("Teoria", 4, 4);
    Volumen* VOGUE = new Revista("VOGUE", 15, 32);
    Volumen* COSAS = new Revista("COSAS", 1, 40);
    Volumen* COSMOPOLITAN = new Revista("COSMOPOLITAN", 11, 100);
    biblioteca->incluir(Programacion);
    biblioteca->incluir(BaseDeDatos);
    biblioteca->incluir(Teoria);
    biblioteca->incluir(VOGUE);
    biblioteca->incluir(COSAS);
    biblioteca->incluir(COSMOPOLITAN);
    biblioteca->mostrarBiblioteca();

    return 0;
}