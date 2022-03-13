#ifndef UNTITLED1_HORA_H
#define UNTITLED1_HORA_H


class Hora {
    int _horas, _minutos, _segundos;

public:
    Hora(int horas, int minutos, int segundos) : _horas(horas), _minutos(minutos), _segundos(segundos) {}

    void soma(Hora &h);
    void subtracao(Hora &h);

};
#endif //UNTITLED1_HORA_H
