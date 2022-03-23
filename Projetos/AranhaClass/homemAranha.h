//
// Created by rhian on 21/03/2022.
//

#ifndef UNTITLED4_HOMEMARANHA_H
#define UNTITLED4_HOMEMARANHA_H

#include "homem.h"
#include "aranha.h"
class HomemAranha: public Homem, public Aranha{

public:
    HomemAranha(std::string nome): Homem(nome), Aranha(nome){}

    void soltarTeiasParker(){
        std::cout << Aranha::_nome <<"teias doias";
    }


};


#endif //UNTITLED4_HOMEMARANHA_H
