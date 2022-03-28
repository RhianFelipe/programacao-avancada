- Faltou alocar e desalocar o vetor de contas

```
*contas[] // Em nenhum momento esse vetor está sendo alocado/desalocado
```

- Faltou declarar os métodos constantes

- O set é uma convenção. Podemos dar um nome mais distintivo pra ele. Se temos a operação alterarCliente, não precisamos do setCliente.

```
void Conta::alterarCliente(std::string novoCliente) {
    Conta::setCliente(novoCliente);
}
```
