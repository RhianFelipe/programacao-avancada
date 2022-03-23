//
// Created by rhian on 18/03/2022.
//

#ifndef UNTITLED3_RETANGULO_H
#define UNTITLED3_RETANGULO_H
#include <iostream>
#include "Poligono.h"

class Retangulo : public Poligono{

public:
    Retangulo(int base, int altura): Poligono(3), _base(base), _altura(altura){
        std::cout << "Retangulo: iniciando " << std::endl;
    }

    // base * altura
private:

int _base;
int _altura;

};


#endif //UNTITLED3_RETANGULO_H
