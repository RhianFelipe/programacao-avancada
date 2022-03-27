#ifndef UNTITLED1_CONTASALARIO_H
#define UNTITLED1_CONTASALARIO_H

#include "../Conta/conta.h"

class ContaSalario : public Conta {
public:
    ContaSalario(int numero, std::string agencia, std::string cliente, float saldo) : Conta(numero, agencia, cliente,
                                                                                            saldo) {}
};


#endif //UNTITLED1_CONTASALARIO_H
