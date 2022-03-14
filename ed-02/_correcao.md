1. Observar a formatacao/indetação do código

2. Declarar um atributo por linha 

//Nota do Desenvolvedor e Pergunta ao professor, não sabia muito bem onde fazer a validação da hora/minuto, fiquei entre aqui e lá na main, acabei colocando aqui, qual é o ideal?

Depende da modelagem do sistema. O certo é colocar no objeto, no momento que vai inserir a hora/minuto no objeto já pode ser feita essa validação. Assim o objeto sempre vai estar válido.

Pensando numa aplicação com interface gráfica, podemos replicar a validação na camada de interface também. Assim temos a validação nas duas pontas. 
