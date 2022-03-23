#include <iostream>

#include "Triangulo.h"

int main() {


    {// td vez q faz uma var aqui, ela morre depois q acabe o bloco

        Triangulo t1(3, 4);
        t1.desenha();       // com sobrescrita
        t1.imprimeLados();  // sem sobrescrita
    }



    return 0;
}