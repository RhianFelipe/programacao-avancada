#include <iostream>
#include "conta.h"
#include "banco.h"

using namespace std;

int main() {

    cout << endl << "----------|CLASSE CONTA|----------";
    Conta conta1(1, "Nubank", "Rhian", 400);
    Conta conta2(2, "Bradesco", "Cleinton", 100);
    Conta conta3(3, "Nubm", "Samara", 33);
    Conta conta4(4, "bank", "Alou", 40);
    Conta conta5(5, "Nub", "Calista", 23423);


    conta1.depositarQuantia(500);
    conta1.retirarQuantia(300);
    conta1.depositarQuantia(145.77);
    conta1.imprimirExtrato();
    conta1.alterarCliente("Chaua");


    cout << endl << "----------|CLASSE BANCO|----------" << endl;
    // Por algum motivo, o codigo as vezes da bad alloc, não entendi muito bem o motivo, pois dependia dos valores passados
    // para o obj conta, usei o delete na função de imprime(), depois que ele imprimisse todos os valores ele excluia o vetor
    // mas não resolveu
    // alguma orientação?
    cout << endl << "|MEU BANCO|" << endl;
    Banco MeuBanco(10);
    MeuBanco.addConta(conta1);
    MeuBanco.addConta(conta2);
    MeuBanco.addConta(conta3);
    MeuBanco.addConta(conta4);
    //O código esta listando as contas certo, mas sempre que tento add conta5 ele da bad_alloc
   // MeuBanco.addConta(conta5); // em outras tentativas consegui add os 5 bancos, usando outros valores
    MeuBanco.imprime();

    cout << endl << "|SUPER BANCO|" << endl;
    Banco SuperBanco(10000);
    SuperBanco.addConta(conta1);
    SuperBanco.imprime();

}
