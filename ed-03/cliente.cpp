#include "cliente.h"
#include <iostream>
#include <iomanip>
using namespace std;

void Cliente::imprimeCliente() {
    cout << "Nome:" << getNome() << endl;
    cout << "Idade:" << getIdade() << endl;
    cout << "E-mail:" << getEmail()<< endl;
    cout <<"Data de Nascimento:" <<setw(2) << setfill('0')<<  _data._dia  << "/" << setw(2) << _data._mes << "/" << setw(2)  << _data._ano << endl;
}
