# Calculadora Buggada

Esse repositório foi gerado em um Workshop sobre Git e GitHub oferecido pela Escola Piloto de Computação da Universidade Federal de São Carlos, [EPiC-UFSCar](https://www.facebook.com/epicufscar/). O projeto original está disponível em: [Calculadora Buggada](https://github.com/falcaopetri/calculadora_buggada).


## Sobre

Esse é o projeto de uma Calculadora extremamente simples. Ela foi desenvolvida em C apenas para aplicar conhecimentos como função, #define's etc.

## O que ela faz

Exemplo de uso:
- 4+2
- 2 / 1
- 20+21     <- a calculadora fecha quando a resposta é 41

Operações disponíveis:
- Adição
- Subtração
- Multiplicação
- Divisão inteira

## Como ler o código

Primeiramente, execute o código e faça alguns testes para entender como a calculadora funciona. Por enquanto, a calculadora fecha quando digitamos alguma operação cujo resultado é 41.

Todas as funções possuem alguma documentação, descrevendo o que ela faz. Mesmo que você não saiba o que é uma função ainda, não será muito difícil utilizar a intuição para entender o código.

Comece a ler o código a partir da função `main()`, que está no final do arquivo. Daí em diante, siga o fluxo de execução. Por exemplo, a função `main()` simplesmente chama a função responsável por simular uma calculadora, `rodar_calc()`. Dentro dela, temos a chamada de algumas funções auxiliares. Entenda primeiro como `rodar_calc()` funciona, e depois, se necessário, veja o código das funções utilizadas dentro de `rodar_calc()`.

## Contribuindo

Além das issues, há vários comentários com o texto FIXME e TODO ao longo do código. Preferencialmente, crie issues para os FIXME's e TODO's, caso ainda não existam.

### Como adicionar novas operações?

Veja:
- `imprimir_cabecalho()`
- `calcular()`
- `operacao_valida()`
- a seção `>>>>>Operações<<<<<`

### Como corrigir bugs?

Apesar de ter vários bugs, a calculadora funciona bem do jeito que está, isto é, não faça modificações que podem piorar o funcionamento dela na branch master! Sempre crie uma branch, tanto para corrigir bugs quanto para adicionar featuers.

