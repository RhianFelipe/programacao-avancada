#ifndef UNTITLED1_INVESTIMENTO_H
#define UNTITLED1_INVESTIMENTO_H

#include <iostream>

class Investimento {
    float _jurosDiarios;

public:
    Investimento(float juros) : _jurosDiarios(juros) {}

    float getJurosDiarios() const { return _jurosDiarios; }

    void setJurosDiarios(float jurosDiarios) {
        if (jurosDiarios < 0 || jurosDiarios > 1)
            std::cout << "Valor de Juros Menor que 0, ou maior que 1";
        else
            _jurosDiarios = jurosDiarios;
    }

    void imprime();

};


#endif //UNTITLED1_INVESTIMENTO_H
