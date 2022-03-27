#ifndef UNTITLED1_CONTA_H
#define UNTITLED1_CONTA_H

#include <string>
#include <iostream>

class Conta {

    int _numero;
    std::string _agencia;
    std::string _cliente;
    float _saldo;
    int i = 1;
    float extrato[100];
public:
    Conta() : _numero(0), _agencia(""), _cliente(""), _saldo(0) {}

    Conta(int numero, std::string agencia, std::string cliente, float saldo) : _numero(numero), _agencia(agencia),
                                                                               _cliente(cliente), _saldo(saldo) {

    }

// =====GETTERS=====
    int getNumero() const { return _numero; }

    std::string getAgencia() const { return _agencia; }

    std::string getCliente() const { return _cliente; }

    double getSaldo() const { return _saldo; }

// =====SETTERS=====
    void setNumero(int numero) { _numero = numero; }

    void setAgencia(std::string agencia) { _agencia = agencia; }

    void setCliente(std::string cliente) { _cliente = cliente; }

    void setSaldo(int saldo) { _saldo = saldo; }

// =====FUNCOES=====
    void depositarQuantia(float quantia);

    void retirarQuantia(float quantia);

    void imprimirExtrato();

    void alterarCliente(std::string novoCliente);


};


#endif //UNTITLED1_CONTA_H
