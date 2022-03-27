#include <iostream>
#include "Conta/conta.h"
#include "ContaPoupanca/contaPoupanca.h"
#include "ContaCorrente/contaCorrente.h"
#include "ContaSalario/contaSalario.h"
#include "Investimento/investimento.h"

using namespace std;

int main() {


    ContaPoupanca cP1(1, "Nubank", "Rhian", 3000, 0.08);
    ContaCorrente cC1(2, "Bradesco", "Lara", 20000, 0.03);
    ContaSalario cS1(3, "Neon", "Silva", 1213);

    cP1.depositarQuantia(1000.00);
    cC1.depositarQuantia(1000.00);

    cP1.aplicarJurosDiarios(20, 0.08);
    cC1.aplicarJurosDiarios(20, 0.03);



}