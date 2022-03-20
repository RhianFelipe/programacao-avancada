#include "conta.h"
#include <iostream>

using namespace std;


void Conta::depositarQuantia(float quantia) {
    _saldo = _saldo + quantia;

    extrato[i] = _saldo;
    extrato[i++];
}


void Conta::retirarQuantia(float quantia) {
    _saldo = _saldo - quantia;
    extrato[i] = _saldo;
    extrato[i++];
}

void Conta::imprimirExtrato() {

    cout << endl << "=====EXTRATO DA CONTA=====";
    for (int j = 1; j < i; ++j) {

        cout << endl << j << ": " << extrato[j];
    }
    cout << endl << "==========================" << endl;
}

void Conta::alterarCliente(std::string novoCliente) {
    Conta::setCliente(novoCliente);
}

