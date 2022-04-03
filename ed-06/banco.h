#ifndef UNTITLED1_BANCO_H
#define UNTITLED1_BANCO_H

#include <iostream>
#include "Conta/conta.h"

class Banco {
    int _numContasBanc = 0;
    int i = 0;
    Conta *contas[];

public:
    Banco(int numContasBanc) : _numContasBanc(numContasBanc) {}

    void addConta(Conta &conta);

    void imprime();

};

#endif //UNTITLED1_BANCO_H