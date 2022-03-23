//
// Created by rhian on 21/03/2022.
//

#ifndef UNTITLED4_ARANHA_H
#define UNTITLED4_ARANHA_H

#include <string>
#include <iostream>
class Aranha {
public:
    Aranha(std::string nome): _nome(nome){}
    void soltarTeia(){
        std::cout << _nome << "Esta soltando teia" << std::endl;
    }
    void correr(){
        std::cout << _nome << "Esta correndo" << std::endl;
    }
    void falar(){
        std::cout << _nome << "Esta falando" << std::endl;
    }

protected:
    std::string _nome;
};


#endif //UNTITLED4_ARANHA_H
