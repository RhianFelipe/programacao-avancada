#ifndef UNTITLED1_CONTASALARIO_H
#define UNTITLED1_CONTASALARIO_H

#include "../Investimento/investimento.h"
#include "../Conta/conta.h"

class ContaSalario : public Conta, public Investimento{
public:
    ContaSalario(int numero, std::string agencia, std::string cliente, float saldo) : Conta(numero, agencia, cliente,
                                                                                            saldo) , Investimento(0.05) {}

    void aplicarJurosDiarios(int dias);
};


#endif //UNTITLED1_CONTASALARIO_H
