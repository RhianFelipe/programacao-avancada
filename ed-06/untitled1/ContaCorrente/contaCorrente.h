

#ifndef UNTITLED1_CONTACORRENTE_H
#define UNTITLED1_CONTACORRENTE_H

#include "../Conta/conta.h"
#include "../Investimento/investimento.h"

class ContaCorrente : public Conta, public Investimento {

public:
    ContaCorrente(int numero, std::string agencia, std::string cliente, float saldo) :
            Conta(numero, agencia, cliente, saldo),
            Investimento(0.03) {}

    void aplicarJurosDiarios(int dias);
};


#endif //UNTITLED1_CONTACORRENTE_H
