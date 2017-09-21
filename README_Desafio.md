# Calculadora Buggada - Desafio

## Sobre

Esse projeto foi desenvolvido especialmente para o Workshop sobre Git e GitHub oferecido pela **Escola Piloto de Computação** da **Universidade Federal de São Carlos**, [EPiC-UFSCar](https://www.facebook.com/epicufscar/). A Calculadora Buggada oferece a oportunidade para que os participantes do workshop interajam efetivamente com o Git e o GitHub, simulando um workflow real de desenvolvimento de uma aplicação.

Esse repositório propõe um desafio: corrigir bugs e adicionar funcionalidades a um protótipo de calculadora desenvolvida em C. Todas as informações necessárias para a execução do desafio estão contidas nesse arquivo. Dessa forma, iremos fortalecer os conceitos e comandos ensinados, além de permitir que dúvidas e problemas surjam e sejam resolvidos da forma mais natural possível.

Ah sim, **o desafio é em duplas**! Um será o *Owner*, ou dono do projeto, e outro será um *Contributor*, isto é, uma pessoa interessada em contribuir com o projeto do *Owner*. Vocês trabalharão juntos para realizar as tarefas.

Algumas dicas sobre desenvolvimento de projetos são apresentadas nesse repositório. Para começar: 

- Sempre leia o README de um projeto; e
- Sempre escreva um README para seus projetos.

OBS: Na tentativa de facilitar o entendimento por qualquer pessoa, esse projeto foi desenvolvido em um único arquivo e sem o uso de abstrações como structs ou ponteiros. Consequentemente, gambiarras tiveram que ser feitas.

## Pré-requisitos

Espera-se que você já tenha instalado o [Git](https://git-scm.com/downloads) e criado uma conta no [GitHub](https://github.com/).

## Objetivo

A ideia é simular um workflow de trabalho parecido com uma situação real. Normalmente, temos um projeto que deve ser desenvolvido por várias pessoas. Assim, é necessário uma forma de gerenciar versões do código, incluindo informações sobre quem foi o responsável por realizar determinada alteração ou quais tarefas ainda precisam ser realizadas.

O Git é capaz de nos responder a primeira pergunta, sobre quem alterou, quando e por quê. Entretanto, para responder a pergunta de o que ainda deve ser feito utilizaremos uma funcionalidade do GitHub: as Issues.

Executar o desafio proposto nesse repositório é equivalente a realizar os seguintes passos:

- Criar um projeto base inicial;    
- Listar as tarefas que devem ser realizadas;
- Selecionar uma tarefa a ser desenvolvida;
- Realizar as modificações necessárias para a tarefa sem afetar o código principal;
- Juntar as modificações realizadas com o código principal;
- Marcar a tarefa como resolvida.

## Etapas

### Setup - Owner

1. Baixar o projeto do GitHub
	- Opção "Clone or Download" -> "Download ZIP"
	- Descompactar
    - Deletar o arquivo README.md
    - Renomear o arquivo README_Calculadora.md para README.md

Observe que a opção de Download ZIP não traz a pasta `.git`, isto é, não é um repositório git. Todas as informações do controle de versão são perdidas. Se quiséssemos trabalhar no repositório original, teríamos que utilizar o comando `git clone <URL>` para baixar as informações armazenadas pelo git junto com os arquivos de nosso projeto.

Porém a ideia para esse projeto é justamente começar um repositório novo, utilizando os arquivos baixados como "templates". 

2. Ler o README
3. Iniciar repositório local
4. Criar repositório no GitHub
5. Linkar repositório local com repositório remoto
6. Dar *initial commit*
7. Push


**Parabéns**, você acaba de cometer um dos "erros" mais comuns quando trabalhando com versionamento de código. O erro foi o seguinte: você demorou 200 linhas de código (calculator.c) para dar o seu primeiro commit!

É claro que vocês não poderiam ter feito isso, pois receberam o arquivo já pronto. Mas faz sentido, não? Se você quiser tirar total proveito de um Versionador de Código, será uma boa prática commitar frequentemente. A frequência de commits varia entre pessoas e projetos, mas nesse caso é simples ver que o código não foi escrito de uma vez só e, portanto, deveríamos ter commitado versões parciais, enquanto estávamos construindo o projeto.

8. Na aba de configurações do repositório no GitHub, adicione a conta do *Contributor* como Colaborador

Ao adicionar o usuário como Colaborador, ele poderá adicionar commits ao repositório. Para mais informações, veja a seção de Fork e pull requests no final desse arquivo.


### Setup - Contributor
1. Dê `git clone` na URL disponibilizada pelo *Owner*

Perceba que a situação dessa vez é diferente. Antes utilizamos o repositório original apenas para acessar os arquivos. Agora queremos realmente contribuir com o projeto do *Owner*.


### Issues
- Criar Issues no GitHub

Issues são, de certa forma, tópicos de discussão. Elas podem representar Bugs, Features, Sugestões etc. 

O repositório original já possui algumas [issues de exemplo](https://github.com/falcaopetri/calculadora_buggada/issues). Você pode reproduzi-las e personalizá-las.

Conforme você estudar o código e realizar modificações, pode surgir a necessidade de adicionar novas issues. Fique à vontade para fazê-lo.

### Execução
- Entender o básico do código
- Para cada issue:
	- Criar branch
	- Resolver problema da issue
	- Commit, Push
    - Merge com a master
    - Push na master
	- Solve issue

Perceba que nesse momento o *Owner* e o *Contributor* podem trabalhar simultaneamente resolvendo as issues!

## Resultado esperado

Basicamente, espera-se que ao final do projeto o nome Calculadora Buggada seja apenas uma lembrança de outros tempos.

De forma específica, você terá:

- Um repositório na sua conta contendo um protótipo de calculadora, mas sem os bugs e fixme's desse projeto;
- Um entendimento de como e por que usar o git (aliado a outras ferramentas, como o GitHub);
- Vários problemas ao longo do caminho, como não saber qual comando usar, comandos com erros, etc. Tudo isso também faz parte de um workflow real, e estamos aqui para ajudar nesse processo.

## Links úteis para aprendizado posterior

### GitHub
- [Issues](https://guides.github.com/features/issues/)
- [Student Pack](https://education.github.com/)

### Fork e Pull requests
- [Forking](https://guides.github.com/activities/forking/)
- [Pull requests](https://help.github.com/articles/about-pull-requests/)
- [Pull request a partir de um fork](https://help.github.com/articles/creating-a-pull-request-from-a-fork/)

### Git
- [Cheat sheet](https://goo.gl/AkN16y)

### README
- [O que é um README?](https://en.wikipedia.org/wiki/README)
- [Como escrever um README no GitHub?](https://guides.github.com/features/mastering-markdown/)
- [Exemplo de um README](https://gist.github.com/PurpleBooth/109311bb0361f32d87a2)

