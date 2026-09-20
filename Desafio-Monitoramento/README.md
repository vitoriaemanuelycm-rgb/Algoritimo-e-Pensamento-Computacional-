## Monitoramento Inteligente de Temperatura
Nome:Emanuely Vitoria Cardoso Mendes

Disciplina: Algoritimo e Pensamento Computacional

Professora: Karla Sartin

#### Obejetivo
o programa tem como objetivo facilitar o monitoramento e controle de temperatura que é necessário em certas situações como hospitais,
laboratório, indústria de alimentos,data centers e etc. Além de alertar quando essas temperaturas ficam perigosas para o comprometimento do produto por exemplo.


#### Funcionamento do programa
O programa funciona assim começa pedindo ao usuário o seu limite de temperatura que só pode ser maior que zero se não aparece uma mensagem  de erro que foi colocada utilizando else ,ao colocar o limite o programa passa para a próxima parte onde o programa pede ao usuário as temperatura ele pode colocar quantas quiser sob uma condição ter número se for letra da mensagem de erro e para encerrar o programa e mostrar quantas temperaturas foram feitas, média,maior ,menor, quantidade de limites ultrapassados e qual foi o limite da temperatura o programa mostra duas opções uma manual onde ao digitar -999 ele encerrar e outra automaticamente que se o programa detectar 3 temperaturas consecutivas além do limite estabelecido ele encerrar e manda um alerta junto com os resultados finais ,nesse limite o código funciona assim há  um contador de limites quando o usuário digita uma temperatura alta e depois uma temperatura dentro do limite o programa manda só um aviso porque tem uma outra condição a do encerramento automaticamente que só funciona quando o limite  é ultrapassado  3 vezes seguidas.
#### Estrutura de repetição 
Foram utilizados para estrutura de repetições o laço while por que era um laço mais familiar e conhecido além de se adequar na parte necessária do código.Houve 4 laços while no programa um para executar várias vezes a leitura das temperaturas se o limite for menor que 3  permitindo assim colocar várias temperatura e dentro várias condições ,outros dois while foram usados para limpar o buffer de entrada do código e o último foi usado para que o usuário desse o limite de temperatura maior que 0  além de outras condições dentro do laço útizando if e else.
#### Como Executar
Para executar a duas maneiras copiar o código e colar no GBD Online ou utulizar o GCC  e escrever assim para compilar e executar gcc monitoramento.c - o monitoramento.monitoramento.exe 

#### Testes realizados
No primeiro teste todas as contra medidas caso o usuário digitasse algo que não deveria funcionaram mostrando com a condição else mensagem de erro.
No segundo teste o programa mostrou um aviso quando uma temperatura ultrapassava o limite mais ao digitar uma próxima temperatura dentro do limite o programa ainda não mostrou o aviso de alerta quando e ultrapassado 3 vezes mostrando bem sucedido essa parte do programa.
No último teste o programa funciono como esperado automaticamente encerrando quando 3 temperaturas altas e fora dos limites eram digitada 3 vezes seguidas.

##### Eu escolhi o While porque eu já conhecia ele do Python e era uma mais fácil para mim de trabalhar com ele. A parte no algoritmo que houve diferença entre testar o laço e não outro comando para resolver um problema foi no momento em que usuário tinha que digitar várias temperaturas eu estava tendo problemas em conseguir fazer isso eu estava utilizando condições  if e não estavam funcionando.
