#include <stdio.h>
#include <math.h>

int main() {
    int opcao;

    printf("================ BEM-VINDO A CALCULADORA ================\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("5 - Divisao Inteira\n");
    printf("6 - Modulo (Resto da Divisao)\n");
    printf("7 - Exponenciacao\n");
    printf("8 - Raiz Quadrada\n");
    printf("9 - Area do Retangulo\n");
    printf("10 - Area do Triangulo\n");
    printf("11 - Area do Quadrado\n");
    printf("12 - Area do Losango\n");
    printf("13 - Perimetro do Circulo\n");
    printf("14 - Perimetro do Quadrado\n");
    printf("15 - Converter Kelvin para Celsius\n");
    printf("16 - Converter Fahrenheit para Celsius\n");
    printf("17 - Converter m/s para km/h\n");
    printf("18 - Consumo de Combustivel (km/l)\n");
    printf("19 - Calcular IMC\n");
    printf("20 - Logaritmo (Base 10)\n");
    printf("=========================================================\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        double A, B, C;
        printf("\n--- SOMA ---\n");
        printf("Digite o primeiro valor: ");
        scanf("%lf", &A);
        printf("Digite o segundo valor: ");
        scanf("%lf", &B);
        C = A + B;
        printf("O valor da soma e: %g\n", C);

    } else if (opcao == 2) {
        double A, B, C;
        printf("\n--- SUBTRACAO ---\n");
        printf("Digite o primeiro numero: ");
        scanf("%lf", &A);
        printf("Digite o segundo numero: ");
        scanf("%lf", &B);
        C = A - B;
        printf("O valor da subtracao e: %g\n", C);

    } else if (opcao == 3) {
        double A, B, C;
        printf("\n--- MULTIPLICACAO ---\n");
        printf("Digite o primeiro valor: ");
        scanf("%lf", &A);
        printf("Digite o segundo valor: ");
        scanf("%lf", &B);
        C = A * B;
        printf("O valor da multiplicacao e: %g\n", C);

    } else if (opcao == 4) {
        double A, B, C;
        printf("\n--- DIVISAO ---\n");
        printf("Digite o primeiro valor: ");
        scanf("%lf", &A);
        printf("Digite o segundo valor: ");
        scanf("%lf", &B);
        if (B != 0) {
            C = A / B;
            printf("O valor da divisao e: %g\n", C);
        } else {
            printf("Erro: Divisao por zero nao e permitida.\n");
        }

    } else if (opcao == 5) {
        double A, B;
        int C;
        printf("\n--- DIVISAO INTEIRA ---\n");
        printf("Digite o primeiro valor: ");
        scanf("%lf", &A);
        printf("Digite o segundo valor: ");
        scanf("%lf", &B);
        if (B != 0) {
            C = (int)(A / B);
            printf("O valor da divisao inteira e: %d\n", C);
        } else {
            printf("Erro: Divisao por zero nao e permitida.\n");
        }

    } else if (opcao == 6) {
        int A, B, C;
        printf("\n--- MODULO (RESTO DA DIVISAO) ---\n");
        printf("Digite o primeiro valor inteiro: ");
        scanf("%d", &A);
        printf("Digite o segundo valor inteiro: ");
        scanf("%d", &B);
        if (B != 0) {
            C = A % B;
            printf("O valor do modulo e: %d\n", C);
        } else {
            printf("Erro: Divisao por zero nao e permitida.\n");
        }

    } else if (opcao == 7) {
        double A, B, C;
        printf("\n--- EXPONENCIACAO ---\n");
        printf("Digite a base: ");
        scanf("%lf", &A);
        printf("Digite o expoente: ");
        scanf("%lf", &B);
        C = pow(A, B);
        printf("O resultado da exponenciacao e: %g\n", C);

    } else if (opcao == 8) {
        double A, B;
        printf("\n--- RAIZ QUADRADA ---\n");
        printf("Digite o numero para calcular a raiz quadrada: ");
        scanf("%lf", &A);
        if (A >= 0) {
            B = sqrt(A);
            printf("A raiz quadrada e: %g\n", B);
        } else {
            printf("Erro: Nao e possivel calcular raiz quadrada de numero negativo em R.\n");
        }

    } else if (opcao == 9) {
        double A, B, C;
        printf("\n--- AREA DO RETANGULO ---\n");
        printf("Digite o valor da base: ");
        scanf("%lf", &A);
        printf("Digite o valor da altura: ");
        scanf("%lf", &B);
        C = A * B;
        printf("A area do retangulo e: %g\n", C);

    } else if (opcao == 10) {
        double A, B, C;
        printf("\n--- AREA DO TRIANGULO ---\n");
        printf("Digite o valor da base: ");
        scanf("%lf", &A);
        printf("Digite o valor da altura: ");
        scanf("%lf", &B);
        C = (A * B) / 2.0;
        printf("A area do triangulo e: %g\n", C);

    } else if (opcao == 11) {
        double A, B;
        printf("\n--- AREA DO QUADRADO ---\n");
        printf("Digite a medida do lado: ");
        scanf("%lf", &A);
        B = A * A;
        printf("A area do quadrado e: %g\n", B);

    } else if (opcao == 12) {
        double A, B, C;
        printf("\n--- AREA DO LOSANGO ---\n");
        printf("Digite a medida da diagonal maior: ");
        scanf("%lf", &A);
        printf("Digite a medida da diagonal menor: ");
        scanf("%lf", &B);
        C = (A * B) / 2.0;
        printf("A area do losango e: %g\n", C);

    } else if (opcao == 13) {
        double raio, perimetro;
        printf("\n--- PERIMETRO DO CIRCULO ---\n");
        printf("Digite o valor do raio: ");
        scanf("%lf", &raio);
        perimetro = raio * 2.0 * 3.14159;
        printf("O perimetro do circulo e: %g\n", perimetro);

    } else if (opcao == 14) {
        double lado, perimetro;
        printf("\n--- PERIMETRO DO QUADRADO ---\n");
        printf("Digite a medida do lado do quadrado: ");
        scanf("%lf", &lado);
        perimetro = lado * 4.0;
        printf("O perimetro do quadrado e: %g\n", perimetro);

    } else if (opcao == 15) {
        double K, C;
        printf("\n--- KELVIN PARA CELSIUS ---\n");
        printf("Digite a temperatura em Kelvin: ");
        scanf("%lf", &K);
        C = K - 273.15;
        printf("A temperatura em Celsius e: %g °C\n", C);

    } else if (opcao == 16) {
        double F, C;
        printf("\n--- FAHRENHEIT PARA CELSIUS ---\n");
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%lf", &F);
        C = (F - 32.0) * 5.0 / 9.0;
        printf("A temperatura em Celsius e: %g °C\n", C);

    } else if (opcao == 17) {
        double ms, kmh;
        printf("\n--- M/S PARA KM/H ---\n");
        printf("Digite a velocidade em m/s: ");
        scanf("%lf", &ms);
        kmh = ms * 3.6;
        printf("A velocidade em km/h e: %g km/h\n", kmh);

    } else if (opcao == 18) {
        double distancia, litros, consumo;
        printf("\n--- CONSUMO DE COMBUSTIVEL ---\n");
        printf("Digite a distancia percorrida (km): ");
        scanf("%lf", &distancia);
        printf("Digite a quantidade de combustivel gasta (litros): ");
        scanf("%lf", &litros);
        if (litros != 0) {
            consumo = distancia / litros;
            printf("O consumo medio e: %g km/l\n", consumo);
        } else {
            printf("Erro: Litros nao podem ser zero.\n");
        }

    } else if (opcao == 19) {
        double peso, altura, imc;
        printf("\n--- CALCULO DO IMC ---\n");
        printf("Digite o peso (kg): ");
        scanf("%lf", &peso);
        printf("Digite a altura (m): ");
        scanf("%lf", &altura);
        if (altura != 0) {
            imc = peso / (altura * altura);
            printf("O IMC e: %g\n", imc);
        } else {
            printf("Erro: Altura nao pode ser zero.\n");
        }

    } else if (opcao == 20) {
        double num, resultado;
        printf("\n--- LOGARITMO (BASE 10) ---\n");
        printf("Digite um numero positivo: ");
        scanf("%lf", &num);
        if (num > 0) {
            resultado = log10(num);
            printf("O logaritmo de %g na base 10 e: %g\n", num, resultado);
        } else {
            printf("Erro: Logaritmo e definido apenas para numeros maiores que zero.\n");
        }

    } else {
        printf("\nOpcao invalida! Por favor, escolha um numero entre 1 e 20.\n");
    }

    return 0;
}
