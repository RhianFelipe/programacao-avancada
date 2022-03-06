/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

class Relogio{
 
    int horas,minutos;
    public:
    Relogio(){}
    
    Relogio(int h, int m){
     
               horas = h;
        minutos = m;  
      
     
    }
    
     ~Relogio(){}
     
     void formataTempo(){
       cout << endl << setw(2) << setfill('0')<<  horas  << ":" << setw(2) << minutos;
}
     void calculaMinutos(){
         int minutosCalculador = (horas*60)+minutos;
         cout << endl << minutosCalculador << " Minutos no total";
     }
};


int main()
{
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