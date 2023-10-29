# Sistema de Gerenciamento de Livraria

Este é um exercício de desenvolvimento de um sistema simples de gerenciamento para uma pequena livraria. 

## Menu Principal

O programa inicia apresentando um menu ao usuário, permitindo que ele escolha uma das operações listadas. O menu será repetidamente exibido até que o usuário opte por sair do sistema.

![](https://media.discordapp.net/attachments/1109930711055618160/1168204409986105354/image.png?ex=6550ea23&is=653e7523&hm=be70b6dd84dc236585f9b4228df176e133855775051730bf118b5a65c9eeb460&=)

O sistema permite realizar as seguintes operações:

1. Cadastrar um novo livro.

![](https://media.discordapp.net/attachments/1109930711055618160/1168205080516907028/image.png?ex=6550eac3&is=653e75c3&hm=f1417c8067b3feb8c6129a8f29818cadffe470f5d07213f614c14e1cba287d2a&=)

2. Imprimir os detalhes de um livro específico.

![](https://media.discordapp.net/attachments/1109930711055618160/1168205706588061817/image.png?ex=6550eb58&is=653e7658&hm=d9752ffc7fc2c80e10c1f0b69e066bf96716e65db3513cb6142940e6b09137d8&=)

3. Imprimir os detalhes de todos os livros no estoque.

![](https://media.discordapp.net/attachments/1109930711055618160/1168206206779785226/image.png?ex=6550ebcf&is=653e76cf&hm=a8f7e6a1f9637613b05e9463a687f2912e09c867dde65bacece1b976caa10a95&=)

4. Realizar uma busca por autor ou título do livro ou autor.

![](https://media.discordapp.net/attachments/1109930711055618160/1168206436405350452/image.png?ex=6550ec06&is=653e7706&hm=8c13a9a53f36aa57f043709c01322c970a68b872999bc36b344380f58c988f60&=)

5. Sair do sistema.

## Estrutura do Livro

Para representar as informações de um livro, foi criada uma estrutura chamada "Livro" com os seguintes campos:

- Título (string com no máximo 100 caracteres).
- Autor (string com no máximo 50 caracteres).
- ISBN (string com 13 caracteres).
- Preço (número decimal).
- Quantidade em estoque (número inteiro).

## Funções

O sistema conta com as seguintes funções:

- `ler_dados(posicao)`: Esta função coleta os detalhes de um novo livro e armazena na posição fornecida no vetor de livros.
- `imprimir_unico(posicao)`: Esta função imprime os detalhes do livro na posição fornecida.
- `imprimir_tudo()`: Esta função imprime os detalhes de todos os livros cadastrados.
- `imprimir_nome()`: Esta função imprime os detalhes dos livros com a parte do nome do livro ou autor fornecida.


## Armazenamento de Livros

O sistema utiliza um vetor para armazenar todos os livros cadastrados, sendo importante notar que o número máximo de livros foi limitado a 100 para simplificar a implementação.

## Considerações Adicionais

- É fundamental que haja tratamento adequado para a entrada de dados, garantindo que o usuário insira as informações corretamente.

![](https://media.discordapp.net/attachments/1109930711055618160/1168206896591802488/image.png?ex=6550ec74&is=653e7774&hm=502ed908afe391669f342e0c113b7b6314e7cf08dbacc623403faa8ad7c68af9&=)

![](https://media.discordapp.net/attachments/1109930711055618160/1168207097742250004/image.png?ex=6550eca4&is=653e77a4&hm=066bba47ebf3b25a771b1b3a133c872c663b42e044e76af55ba8eb585fe86d78&=)

- O sistema considera a possibilidade de um livro já estar cadastrado pelo ISBN e, nesse caso, atualiza a quantidade em estoque.

![](https://media.discordapp.net/attachments/1109930711055618160/1168207502370930788/image.png?ex=6550ed04&is=653e7804&hm=04417c42ca219853af92ff9ef7473408022d4d9c67339657aaf33152a3857178&=)

## Desafio (Bônus)

Como um desafio adicional, foi implementada uma função que permite ao usuário pesquisar um livro pelo título ou autor e exibir os detalhes correspondentes.

