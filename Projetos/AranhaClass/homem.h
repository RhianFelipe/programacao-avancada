//
// Created by rhian on 21/03/2022.
//

#ifndef UNTITLED4_HOMEM_H
#define UNTITLED4_HOMEM_H

#include <string>
#include <iostream>
class Homem {
public:
    Homem(std::string nome): _nome(nome){}
void andar(){
        std::cout << _nome << "Esta andando" << std::endl;
    }
    void correr(){
        std::cout << _nome << "Esta correndo" << std::endl;
    }
    void falar(){
        std::cout << _nome << "Esta falando" << std::endl;
    }

private:
    std::string _nome;
};


#endif //UNTITLED4_HOMEM_H
