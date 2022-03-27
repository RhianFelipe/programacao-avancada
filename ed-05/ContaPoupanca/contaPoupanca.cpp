#include "contaPoupanca.h"
#include <iostream>

using namespace std;

void ContaPoupanca::aplicarJurosDiarios(int dias, float  taxa) {


    float juros = getSaldo() * taxa * dias;
    float saldo = getSaldo();
    saldo = saldo + juros;
    //Impressao criada aqui, pois pro algum motivo outro metodo de impressao não estava acessando os valores modificados desse metodo
    cout << "Aplicado:" << getJurosDiarios() << " de juros - " << "Saldo:" << saldo << endl ;
}

