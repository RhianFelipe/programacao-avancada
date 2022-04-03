//
// Created by rhian on 26/03/2022.
//

#include "contaSalario.h"
#include <iostream>

using namespace std;

void ContaSalario::aplicarJurosDiarios(int dias) {


    float juros = getSaldo() * getJurosDiarios() * dias;
    float saldo = getSaldo();
    saldo = saldo + juros;
    //Impressao criada aqui, pois pro algum motivo outro metodo de impressao não estava acessando os valores modificados desse metodo
    cout << "Conta: " << _cliente << endl;
    cout << "Aplicado: " << getJurosDiarios() << " de juros - " << "Saldo:" << saldo << endl;
}