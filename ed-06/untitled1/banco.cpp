#include "banco.h"


void Banco::addConta(Conta &conta) {
    // cria um novo objeto e coloca na posição de um vetor
    contas[i] = &conta;
    // e passa para a proxima posição
    contas[i++];
}

void Banco::imprime() {
    for (int j = 0; j < i; ++j) {
            std::cout << "=============================================" << std::endl;
            std::cout << "Numero:" << contas[j]->getNumero() << std::endl;
            std::cout << "Agencia:" << contas[j]->getAgencia() << std::endl;
            std::cout << "Cliente:" << contas[j]->getCliente() << std::endl;
            std::cout << "Saldo:" << contas[j]->getSaldo() << std::endl;
            std::cout << "=============================================" << std::endl;


    }
}