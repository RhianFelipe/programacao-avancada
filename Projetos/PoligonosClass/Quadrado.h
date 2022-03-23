//
// Created by rhian on 18/03/2022.
//

#ifndef UNTITLED3_QUADRADO_H
#define UNTITLED3_QUADRADO_H

#include "Retangulo.h"
#include <iostream>
class Quadrado: public Retangulo {


public:
Quadrado(int lado): Retangulo(lado,lado){
    std::cout<<"Lados Quadrado:" << lado;
}
// o resto dos metodos;


};


#endif //UNTITLED3_QUADRADO_H
