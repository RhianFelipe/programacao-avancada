#include "banco.h"


void Banco::addConta(Conta &conta) {
    // cria um novo objeto e coloca na posição de um vetor
    contas[i] = new Conta(conta.getNumero(), conta.getAgencia(), conta.getCliente(), conta.getSaldo());
    // e passa para a proxima posição
    contas[i++];
}

void Banco::imprime() { // a causa mais possivel do bad_alloc é o delete errado, nesse caso, eu não sei bem onde devo por ele...
    for (int j = 0; j < i; ++j) {
        if (j == i) {
            for (int k = 0; k < i; ++k) {
                delete contas[k];
            }
        } else {
            std::cout << "Numero:" << contas[j]->getNumero() << std::endl;
            std::cout << "Agencia:" << contas[j]->getAgencia() << std::endl;
            std::cout << "Cliente:" << contas[j]->getCliente() << std::endl;
            std::cout << "Saldo:" << contas[j]->getSaldo() << std::endl;
            std::cout << "=============================================" << std::endl;
            // delete contas[j]; tinha posto um delete aqui como teste, mas não sei se funcionou bem.

        }
    }
}
