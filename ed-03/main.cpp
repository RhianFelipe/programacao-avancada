#include <iostream>
#include "hora.h"
#include "cliente.h"
#include "conta.h"

using namespace std;
int main() {
    cout <<endl << "----------|CLASSE CLIENTE|----------" << endl;
Cliente c1("Rhian", 19, "rhian.felipe@hotmail.com",DataNascimento(04,06,2002));
c1.imprimeCliente();

    cout <<endl << "----------|CLASSE CONTA|----------";
Conta conta1(10, "Nubank" ,"Rhian",400);
conta1.imprimirConta();

conta1.depositarQuantia(500);
conta1.retirarQuantia(300);
conta1.depositarQuantia(145.77);
conta1.imprimirExtrato();
conta1.alterarCliente("Chaua");


    cout <<endl << "----------|CLASSE HORA|----------" << endl;
Hora h1(5,10,57);
Hora h2(5,1,1);
h1.soma(h2);
h1.subtracao(h2);









}
