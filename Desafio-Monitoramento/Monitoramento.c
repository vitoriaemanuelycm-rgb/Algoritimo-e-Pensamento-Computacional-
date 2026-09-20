#include <stdio.h> 

int main() {
    // Declarando e inicializando as variáveis para o limite de alerta e a temperatura da leitura atual
    float limite_temp = 0.0;
    float temp_atual = 0.0;
    
    // Variáveis para armazenar as estatísticas do monitoramento
    float soma_temp = 0.0;            // Acumula a soma das temperaturas para calcular a média
    float maior_temp = 0.0;           // Guarda a maior temperatura registrada
    float menor_temp = 0.0;           // Guarda a menor temperatura registrada
    int total_leituras = 0;           // Conta o número total de medições válidas
    int acima_do_limite = 0;          // Conta quantas vezes a temperatura ficou acima do limite
    int consecutivas_criticas = 0;    // Conta quantas leituras SEGUIDAS ultrapassaram o limite
    int limite_valido = 0;            // Flag/Controle para a validação do limite (0 = inválido/falso, 1 = válido/verdadeiro)

    // 1. Solicitação e Validação do Limite de Temperatura
    // Laço 'while': executa repetidamente enquanto 'limite_valido' for igual a 0
    while (limite_valido == 0) {
        printf("Informe o limite maximo de temperatura (C): "); 
        
        // Estrutura 'if': lê o valor digitado via 'scanf' e verifica se:
        // 1. A leitura foi bem-sucedida (retornou 1)
        // 2. O valor de 'limite_temp' é estritamente maior que zero
        if (scanf("%f", &limite_temp) == 1 && limite_temp > 0) {
            limite_valido = 1; // Altera a flag para 1, interrompendo o laço 'while' na próxima verificação
        } else { // Caso o usuário digite texto ou um número menor/igual a zero
            printf("Entrada invalida! Digite um numero maior que zero.\n");
            while (getchar() != '\n'); // Limpa o buffer do teclado até encontrar uma nova linha (caractere '\n')
        }
    }

    printf("\n--- Inicio do Monitoramento ---\n");
    printf("Digite as temperaturas (ou digite -999 para encerrar manualmente):\n\n");

    // 2. Laço Principal de Monitoramento
    // Continua rodando enquanto o contador de leituras consecutivas acima do limite for menor que 3
    while (consecutivas_criticas < 3) {
        // Exibe o número da leitura atual (somamos 1 para a exibição começar em 1, e não em 0)
        printf("Leitura #%d (C): ", total_leituras + 1);
        
        // 'if': Trata entradas que não sejam números (ex: letras)
        if (scanf("%f", &temp_atual) != 1) {
            printf("Erro: Digite apenas numeros.\n");
            while (getchar() != '\n'); // Limpa o buffer de entrada do teclado
            continue; // Pula o restante do código deste laço e volta para o início do 'while'
        }

        // 'if': Condição de parada manual informada pelo usuário (-999)
        if (temp_atual == -999) {
            printf("\nEncerrando monitoramento manualmente...\n");
            break; // Força a saída imediata do laço 'while'
        }

        // 'if/else': Atualiza a maior e a menor temperatura
        if (total_leituras == 0) {
            // Se for a primeira leitura do programa, a maior e menor temperatura são a própria leitura inicial
            maior_temp = temp_atual;
            menor_temp = temp_atual;
        } else {
            // Nas leituras seguintes, compara o valor atual com os extremos gravados
            if (temp_atual > maior_temp) {
                maior_temp = temp_atual; // Atualiza a maior temperatura
            }
            if (temp_atual < menor_temp) {
                menor_temp = temp_atual; // Atualiza a menor temperatura
            }
        }

        // Acumula a temperatura lida para a média e incrementa o total de leituras processadas
        soma_temp = soma_temp + temp_atual;
        total_leituras = total_leituras + 1;

        // 'if/else': Checagem do limite de segurança
        if (temp_atual > limite_temp) {
            acima_do_limite = acima_do_limite + 1;          // Incrementa o total geral de vezes acima do limite
            consecutivas_criticas = consecutivas_criticas + 1; // Incrementa o contador de consecutivas
            printf(" ALERTA: Temperatura acima do limite! [%d/3]\n", consecutivas_criticas);
        } else {
            // Se a temperatura for normal (<= limite_temp), reinicia a contagem de consecutivas
            consecutivas_criticas = 0; 
        }
    }

    // 'if': Checa se a saída do laço principal ocorreu pelo atingimento das 3 leituras críticas
    if (consecutivas_criticas == 3) {
        printf("\n====================================================\n");
        printf(" PERIGO: 3 temperaturas consecutivas acima do limite!\n");
        printf(" Desligamento automatico acionado.\n");
        printf("====================================================\n");
    }

    // 3. Relatório Final
    printf("\n============ RELATORIO FINAL ============\n");
    // 'if/else': Exibe as estatísticas apenas se ao menos 1 leitura válida tiver sido realizada
    if (total_leituras > 0) {
        float media = soma_temp / total_leituras; // Calcula a média das temperaturas
        
        // Exibe os dados formatados (%.2f limita a exibição a 2 casas decimais)
        printf("Total de leituras registradas : %d\n", total_leituras);
        printf("Temperatura media            : %.2f C\n", media);
        printf("Maior temperatura registrada : %.2f C\n", maior_temp);
        printf("Menor temperatura registrada : %.2f C\n", menor_temp);
        printf("Total acima do limite        : %d\n", acima_do_limite);
        printf("Limite de alerta configurado : %.2f C\n", limite_temp);
    } else {
        // Exibido caso o usuário tenha encerrado com -999 logo na primeira leitura
        printf("Nenhuma leitura foi registrada.\n");
    }
    printf("=========================================\n");

    return 0; 
}
