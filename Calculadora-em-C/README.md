## Calculadora em C
Nome: Emanuely Vitória Cardoso Mendes

O programa é uma calculadora feita com a linguagem C, que fornece diferentes tipos de operações matemáticas e aritméticas para o usuário.

#### Objetivo
A calculadora tem como objetivo facilitar o dia dos usuários nos cálculos matemáticos, e ser uma calculadora complexa e inteligente que difere de outras calculadoras, pois essa possui cálculos como IMC, áreas de losango, triângulo, etc.

#### Operações
1 - Soma, 2 - Subtração, 3 - Multiplicação, 4 - Divisão, 5 - Divisão inteira, 6 - Módulo, 7 - Exponencial, 8 - Raiz quadrada, 9 - Área do retângulo, 10 - Área do triângulo, 11 - Área do quadrado, 12 - Área do losango, 13 - Perímetro do raio, 14 - Perímetro do quadrado, 15 - Conversão de Kelvin para Celsius, 16 - Conversão de Fahrenheit para Celsius, 17 - Conversão de metros por segundo para milhas por hora, 18 - Cálculo de consumo de combustível, 19 - IMC 20 - Logaritmo com base 10.

#### Bibliotecas
Foram usados o <stdio.h>, que é responsável por controlar a interação entre o usuário e o sistema (que utiliza o printf para mostrar as informações ao usuário e o scanf para ler as informações digitalizadas), e o <math.h>, que é a biblioteca matemática responsável por fornecer funções como sqrt para calcular raiz quadrada e pow para calcular a potência dos números.

#### Organização do código
O código foi organizado da seguinte maneira: é mostrado as opções de 1 a 20, que são as operações que a calculadora faz. Quando o usuário digita uma opção, o código lê qual foi a opção digitada utilizando if e else if. Em alguns casos foi usado ou outro. Um exemplo é o de raiz quadrada: quando você digita que quer a opção 8 (que é a raiz quadrada), ele pede para digitar o número que você deseja saber a raiz. Você digita e ele mostra o resultado ,mas tem duas condições importantes : um if que deixa claro que só aceita se o número>=0 e um else que diz "erro: não é possível calcular a raiz quadrada se para número negativo".

#### Descrição de conceitos usados no programa
Foram utilizados no projeto estruturas condicionais de if, else if e else. Não houve estruturas de reprodução. Para entrada de dados foi utilizado scanf e para saída de dados foram utilizados printf, além de double para armazenar dados de ponto flutuante e int para armazenar dados inteiros.Também foi utilizado a biblioteca <math.h>.
