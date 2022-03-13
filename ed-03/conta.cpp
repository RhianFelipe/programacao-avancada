#include "conta.h"
#include <iostream>
using namespace std;

int i = 1;

double extrato[100];
        void Conta::depositarQuantia(double quantia) {
    _saldo = _saldo+ quantia;

            extrato[i] =  _saldo;
            extrato[i++];
}


void Conta::retirarQuantia(double quantia) {

    _saldo = _saldo - quantia;
    extrato[i] =  _saldo;
    extrato[i++];
}

void Conta::imprimirExtrato() {

    cout << endl <<"=====EXTRATO DA CONTA=====";
    for (int j = 1; j < i; ++j) {

        cout  <<endl << j << ": "<< extrato[j] ;
    }
 cout << endl << "==========================" << endl;
}

void Conta::alterarCliente(std::string novoCliente) {
            Conta::setCliente(novoCliente);
}

void Conta::imprimirConta() {
            cout << endl << "Numero da Conta:" << getNumero() << endl;
            cout << "Agencia:" << getAgencia() << endl;
            cout << "Cliente:" << getCliente() << endl;
            cout << "Saldo Atual:" << getSaldo() << endl;
        }