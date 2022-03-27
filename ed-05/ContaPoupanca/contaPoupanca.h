
#ifndef UNTITLED1_CONTAPOUPANCA_H
#define UNTITLED1_CONTAPOUPANCA_H

#include "../Conta/conta.h"
#include "../Investimento/investimento.h"
#include <string>

class ContaPoupanca : public Conta, Investimento {

public:
    ContaPoupanca(int numero, std::string agencia, std::string cliente, float saldo, float juros) :
            Conta(numero, agencia, cliente, saldo),
            Investimento(juros) {}

    void aplicarJurosDiarios(int dias, float taxa);


};

#endif //UNTITLED1_CONTAPOUPANCA_H
