# .:: Exercicios Seção 10 - Parte 2 ::.

#### 1- Crie uma struct chamada ponto2d que tenha como atributos os pontos x,y e z. Crie duas estruturas do tipo ponto2d chamadas ponto_incial e ponto_final.
<p><strong>Faça um menu com as seguintes opções e implemente-as:</strong></p>
<p><strong>[1] – Digitar o valor do primeiro ponto</strong></p>
<p><strong>[2] – Digitar os valores do segundo ponto</strong></p>
<p><strong>[3] – Mostrar a distância entre os pontos</strong></p>
<p><strong>[4] – Sair</strong></p>
<p></p>
<p><strong>DICA: Distância entre dois pontos (x1, y1) (x2, y2): raiz quadrada de (x1 – x2)² + (y1 – y2)²</strong></p>

[Resposta](./ExerciciosResolvidos/ex001.c)

#### 2- Crie uma struct para armazenar os dados (nome, idade, posição, numero_camisa) dos jogadores de vôlei de um time. Crie duas estruturas para armazenar os jogadores principais e os reservas. Desenvolva um programa em que o usuário consiga entrar com os jogadores principais (seis) e reservas (4) e mostre-os na tela. Para facilitar a entrada de dados, utilize um menu.

[Resposta](./ExerciciosResolvidos/ex002.c)

#### 3- Faça um programa que declare 3 variáveis, dos tipos inteiro, real e caracter, atribua valores para estas variáveis e mostre seus valores assim como seu tamanho em bytes e seu endereço na memória (inteiro e hexa).

[Resposta](./ExerciciosResolvidos/ex003.c)

#### 4- Crie um programa que declare duas variáveis (inteiro e real) atribua valores para elas e crie dois ponteiros, cada um apontando para uma destas variáveis.
<p><strong>Mostre na tela: o Valor e o endereço de memória das variáveis, o valor do ponteiro, o endereço dp ponteiro e o valor apontado pelo ponteiro.</strong></p>
<p><strong>Qual destes valores são iguais? Justifique?</strong></p>

[Resposta](./ExerciciosResolvidos/ex004.c)

#### 5- Explique o que faz o programa a seguir, e quais valores serão mostrados ao final.
<p></p>
<p><strong>int x1 = 1, x2 = 2, *px1;</strong></p>
<p></p>
<p><strong>px1 = &x1;</strong></p>
<p><strong>x1 = 5;</strong></p>
<p><strong>x2 = (*px1) + 10;</strong></p>
<p><strong>x1 = 9;</strong></p>
<p></p>
<p><strong>printf(“x1: %d x2: %d *px1: %d”, x1, x2, *px1);</strong></p>

[Resposta](./ExerciciosResolvidos/ex005.c)

#### 6- Modifique o exercício número 2 para a utilização de ponteiros na leitura e apresentação dos dados dos vetores.

[Resposta](./ExerciciosResolvidos/ex006.c)

