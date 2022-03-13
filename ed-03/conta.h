#ifndef UNTITLED1_CONTA_H
#define UNTITLED1_CONTA_H
#include <string>

class Conta {
int _numero;
std::string _agencia;
std::string _cliente;
double _saldo;

public:
    Conta():_numero(0),_agencia(""),_cliente(""),_saldo(0){}
    Conta(int numero, std::string agencia, std::string cliente, double saldo):_numero(numero),_agencia(agencia),_cliente(cliente), _saldo(saldo){}

    int getNumero()const {return _numero;}
    std::string getAgencia()const {return _agencia;}
    std::string getCliente()const {return _cliente;}
    double getSaldo()const{ return _saldo;}

    void setNumero(int numero){ _numero = numero;}
    void setAgencia(std::string agencia){_agencia = agencia;}
    void setCliente(std::string cliente){_cliente = cliente;}
    void setSaldo(int saldo){_saldo = saldo;}

    void depositarQuantia(double quantia);
    void retirarQuantia(double quantia);
    void imprimirExtrato();
    void imprimirConta();
    void alterarCliente(std::string novoCliente);




};


#endif //UNTITLED1_CONTA_H
