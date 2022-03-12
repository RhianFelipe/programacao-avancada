

#ifndef UNTITLED_RELOGIO_H
#define UNTITLED_RELOGIO_H

#define HORA_MAX 23
#define MINUTO_MAX 59

class Relogio{ // Declaraçcao classe

    int _horas,_minutos;
public:
    Relogio():_horas(0){} // construtor vazio

    Relogio(int horas, int minutos):_horas(horas),_minutos(minutos){}// Construtor com parametros


//funcoes declaradas
    void formataTempo();
    void calculaMinutos();
};



#endif //UNTITLED_RELOGIO_H
