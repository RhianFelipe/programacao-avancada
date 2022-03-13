#ifndef UNTITLED1_CLIENTE_H
#define UNTITLED1_CLIENTE_H
#include <string>

class DataNascimento{


public:
    int _dia,_mes,_ano;
    DataNascimento(int dia, int mes, int ano):_dia(dia),_mes(mes),_ano(ano){}
};

class Cliente {
    DataNascimento _data;
    std::string _nome;
    int _idade;
    std::string _email;


public:
Cliente():_nome(""),_idade(0),_email(""), _data(_data){}
Cliente(std::string nome, int idade,std::string email, DataNascimento data):_nome(nome),_idade(idade), _email(email),_data(data){}

~Cliente(){}

std::string getNome()const { return _nome;}
int getIdade()const {return _idade;}
DataNascimento getDataNasc()const {return _data; }
std::string getEmail() const{return _email;}

void setNome(std::string nome){ _nome = nome; }
void setIdade(int idade){_idade = idade;}
void setDataNasc(DataNascimento &dataNascimento){_data = dataNascimento;}
void setEmail(std::string email){_email = email;}

void imprimeCliente();

};


#endif //UNTITLED1_CLIENTE_H
