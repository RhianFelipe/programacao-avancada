#include "hora.h"
#include <iostream>

using namespace std;
void Hora::soma(Hora &h){

    _segundos = _segundos + h._segundos;
    _minutos = (_minutos*60) + (h._minutos*60);
    _horas = (_horas*3600) + (h._horas*3600);
 int totalSegundo = _segundos + _minutos + _horas;
   _horas = _horas/3600;
   int resto = totalSegundo % 3600;
   _minutos = resto/60;
   _segundos = resto % 60;

    cout  << _horas <<":"<< _minutos << ":" << _segundos << endl;
}
void Hora::subtracao(Hora &h){
    _segundos = _segundos - h._segundos;
    _minutos = (_minutos*60) - (h._minutos*60);
    _horas = (_horas*3600) - (h._horas*3600);
    int totalSegundo = _segundos + _minutos + _horas;
    _horas = _horas/3600;
    int resto = totalSegundo % 3600;
    _minutos = resto/60;
    _segundos = resto % 60;

    cout << _horas <<":"<< _minutos << ":" << _segundos << endl;
}