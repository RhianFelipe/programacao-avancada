
#include <iostream>
#include <iomanip>
#include "relogio.h"

using namespace std;
// implementacao das funcoes
 void Relogio::formataTempo()  {cout << endl  << setw(2) << setfill('0')<<  _horas  << ":" << setw(2) << _minutos;}

void Relogio::calculaMinutos() {
 //Nota do Desenvolvedor e Pergunta ao professor, não sabia muito bem onde fazer a validação da hora/minuto, fiquei entre aqui e lá na main, acabei colocando aqui, qual é o ideal?
    if(_horas > HORA_MAX || _minutos > MINUTO_MAX){
        cout << endl <<"Hora ou Minuto invalida.";
    }else{
        int minutosCalculador = (_horas*60)+_minutos;
        cout << endl << minutosCalculador << " Minutos no total";
    }
    }


