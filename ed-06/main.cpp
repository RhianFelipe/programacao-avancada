#include <iostream>
#include "Conta/conta.h"
#include "ContaPoupanca/contaPoupanca.h"
#include "ContaCorrente/contaCorrente.h"
#include "ContaSalario/contaSalario.h"
#include "Investimento/investimento.h"
#include "banco.h"

using namespace std;

int main() {
    Conta *contas[100];

    Banco Nubank(5);

    ContaPoupanca cP1(1, "Nubank", "Rhian", 100);
    contas[0] = &cP1;
    ContaPoupanca cP2(2, "Nubank", "Silas", 2000);
    contas[1] = &cP2;
    ContaCorrente cC1(3, "Bradesco", "Rose", 100);
    contas[2] = &cC1;
    ContaCorrente cC2(4, "Unix", "Lara", 1000);
    contas[3] = &cC2;
    ContaSalario cS1(5, "Neon", "Silva", 500);
    contas[4] = &cS1;

    Nubank.addConta(cP1);
    Nubank.addConta(cP2);
    Nubank.addConta(cC1);
    Nubank.addConta(cC2);
    Nubank.addConta(cS1);

    for (int i = 0; i < 5; ++i) {
        contas[i]->aplicarJurosDiarios(40);
    }

    // Não entendo o motivo dele esta pegando so valores antigos, antes da aplicação dos juros, e o resto pegar certo.
    Nubank.imprime();


}