- Faltou criar os arquivos `relogio.h` e `relogio.cpp`.

- Corrigir a indentação do código:
	- Incluir espaço antes do `{`
	- Seguir um padrão: ou abre `{` na mesma linha da declaração do método ou na linha de baixo. As duas estão corretas, o que não pode é misturar os dois estilos
	- Sempre que abrir um bloco `{}`, o código deverá estar indentado em 4 ou 8 espaços.


```cpp
    Relogio(int h, int m){

               horas = h;
        minutos = m;


    }
    // ...
int main()
{
Relogio relogio1(10,5);
Relogio relogio2(1,4);
Relogio relogio3(23,59);
```