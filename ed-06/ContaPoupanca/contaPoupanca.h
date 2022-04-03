
#ifndef UNTITLED1_CONTAPOUPANCA_H
#define UNTITLED1_CONTAPOUPANCA_H

#include "../Conta/conta.h"
#include "../Investimento/investimento.h"
#include <string>

class ContaPoupanca : public Conta, Investimento {

public:
    ContaPoupanca(int numero, std::string agencia, std::string cliente, float saldo) :
            Conta(numero, agencia, cliente, saldo),
            Investimento(0.08) {}
    void aplicarJurosDiarios(int dias);


};

#endif //UNTITLED1_CONTAPOUPANCA_H
