#include "relogio.h"

int main() {
    Relogio relogio1(10,5);
    Relogio relogio2(1,4);
    Relogio relogio3(23,59);

    relogio1.formataTempo();
    relogio1.calculaMinutos();

    relogio2.formataTempo();
    relogio2.calculaMinutos();

    relogio3.formataTempo();
    relogio3.calculaMinutos();

    return 0;
}
