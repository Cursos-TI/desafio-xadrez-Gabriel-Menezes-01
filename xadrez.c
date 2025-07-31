#include <stdio.h>

// ===============================================
// FUNÇÕES RECURSIVAS PARA MOVIMENTOS DAS PEÇAS
// ===============================================

// Função recursiva para movimento da Torre (horizontal direita)
void mover_torre_recursivo(int casas_restantes, int casa_atual) {
    // Caso base: se não há mais casas para mover, termina a recursão
    if (casas_restantes <= 0) {
        return;
    }
    
    // Imprime o movimento atual
    printf("Direita\n");
    
    // Chamada recursiva para a próxima casa
    mover_torre_recursivo(casas_restantes - 1, casa_atual + 1);
}

// Função recursiva para movimento da Rainha (horizontal esquerda)
void mover_rainha_recursivo(int casas_restantes, int casa_atual) {
    // Caso base: se não há mais casas para mover, termina a recursão
    if (casas_restantes <= 0) {
        return;
    }
    
    // Imprime o movimento atual
    printf("Esquerda\n");
    
    // Chamada recursiva para a próxima casa
    mover_rainha_recursivo(casas_restantes - 1, casa_atual + 1);
}

// Função recursiva para movimento do Bispo (diagonal)
void mover_bispo_recursivo(int casas_restantes, int casa_atual) {
    // Caso base: se não há mais casas para mover, termina a recursão
    if (casas_restantes <= 0) {
        return;
    }
    
    // Movimento diagonal = movimento vertical + horizontal
    printf("Cima\n");
    printf("Direita\n");
    
    // Chamada recursiva para a próxima casa diagonal
    mover_bispo_recursivo(casas_restantes - 1, casa_atual + 1);
}

int main()
{
    // ===============================================
    // JOGO AVANÇADO DE MOVIMENTOS DE XADREZ
    // ===============================================

    printf("=== JOGO AVANÇADO DE MOVIMENTOS DE XADREZ ===\n");
    printf("(Versão com Recursividade e Loops Complexos)\n\n");
    printf("Bem-vindos, jogadores!\n");
    printf("Escolham uma peça e vejam os movimentos executados.\n\n");

    // Variáveis para entrada do usuário
    int escolha_peca;
    int casas_movimento;
    int continuar_jogo = 1;
    
    // Variáveis específicas para loops complexos do Cavalo
    int movimento_vertical, movimento_horizontal;
    int parte_movimento;
    int i, j; // Contadores para loops aninhados

    // Loop principal do jogo
    while (continuar_jogo == 1)
    {
        // Menu de seleção de peças
        printf("=== MENU DE PEÇAS ===\n");
        printf("1. 🏰 Torre (movimento horizontal/vertical)\n");
        printf("2. ⛪ Bispo (movimento diagonal)\n");
        printf("3. 👑 Rainha (movimento em qualquer direção)\n");
        printf("4. 🐴 Cavalo (movimento em L)\n");
        printf("0. Sair do jogo\n");
        printf("Escolha uma peça (0-4): ");
        scanf("%d", &escolha_peca);

        if (escolha_peca == 0)
        {
            printf("\nObrigado por jogar! Até a próxima!\n");
            break;
        }

        if (escolha_peca < 1 || escolha_peca > 4)
        {
            printf("\nEscolha inválida! Tente novamente.\n\n");
            continue;
        }

        // Execução do movimento baseado na escolha
        switch (escolha_peca)
        {
        case 1: // TORRE - Usando RECURSIVIDADE
            printf("\nQuantas casas a Torre deve se mover para a direita? ");
            scanf("%d", &casas_movimento);
            
            printf("\n🏰 TORRE: Movimento horizontal para a DIREITA (%d casas)\n", casas_movimento);
            printf("A Torre se move em linha reta (versão RECURSIVA)\n");
            printf("Movimento:\n");

            // Chamada da função recursiva para Torre
            mover_torre_recursivo(casas_movimento, 1);
            printf("Torre completou %d movimentos para a direita (recursivamente)!\n\n", casas_movimento);
            break;

        case 2: // BISPO - Usando RECURSIVIDADE + LOOPS ANINHADOS
            printf("\nQuantas casas o Bispo deve se mover na diagonal? ");
            scanf("%d", &casas_movimento);
            
            printf("\n⛪ BISPO: Movimento diagonal CIMA-DIREITA (%d casas)\n", casas_movimento);
            printf("O Bispo usa RECURSIVIDADE + LOOPS ANINHADOS\n");
            printf("Movimento:\n");

            // Implementação com loops aninhados: externo vertical, interno horizontal
            printf("=== Movimento com Loops Aninhados ===\n");
            for (i = 1; i <= casas_movimento; i++) { // Loop externo: movimento vertical
                printf("Casa %d - Movimento vertical:\n", i);
                for (j = 1; j <= 1; j++) { // Loop interno: movimento horizontal (1 casa por diagonal)
                    printf("Cima\n");
                    printf("Direita\n");
                }
            }
            
            printf("\n=== Movimento com Recursividade ===\n");
            // Chamada da função recursiva para Bispo
            mover_bispo_recursivo(casas_movimento, 1);
            printf("Bispo completou %d movimentos diagonais (recursivo + loops aninhados)!\n\n", casas_movimento);
            break;

        case 3: // RAINHA - Usando RECURSIVIDADE
            printf("\nQuantas casas a Rainha deve se mover para a esquerda? ");
            scanf("%d", &casas_movimento);
            
            printf("\n👑 RAINHA: Movimento horizontal para a ESQUERDA (%d casas)\n", casas_movimento);
            printf("A Rainha se move em qualquer direção (versão RECURSIVA)\n");
            printf("Movimento:\n");

            // Chamada da função recursiva para Rainha
            mover_rainha_recursivo(casas_movimento, 1);
            printf("Rainha completou %d movimentos para a esquerda (recursivamente)!\n\n", casas_movimento);
            break;

        case 4: // CAVALO - Usando LOOPS COMPLEXOS com CONTINUE e BREAK
            printf("\nO Cavalo fará um movimento em L (2 casas CIMA + 1 casa DIREITA)\n");
            printf("Pressione ENTER para executar o movimento...");
            getchar(); // Limpa o buffer
            getchar(); // Espera o usuário pressionar ENTER
            
            printf("\n🐴 CAVALO: Movimento em \"L\" - CIMA-CIMA-DIREITA\n");
            printf("O Cavalo usa LOOPS COMPLEXOS com múltiplas variáveis e condições\n");
            printf("Movimento do Cavalo:\n");

            // Loops complexos com múltiplas variáveis e condições de controle
            parte_movimento = 1;
            movimento_vertical = 0;
            movimento_horizontal = 0;
            
            // Loop externo para controlar as duas partes do movimento L
            for (i = 1; i <= 3; i++) { // Total de 3 movimentos: 2 cima + 1 direita
                
                // Múltiplas condições para controlar o fluxo
                if (parte_movimento == 1 && movimento_vertical < 2) {
                    // Primeira parte: movimentos verticais (2 casas para cima)
                    
                    for (j = 1; j <= 1; j++) { // Loop interno para cada movimento individual
                        printf("Movimento %d - Parte vertical do L:\n", i);
                        printf("Cima\n");
                        movimento_vertical++;
                        
                        // Condição para pular para próxima iteração se necessário
                        if (movimento_vertical == 2) {
                            parte_movimento = 2; // Muda para parte horizontal
                            continue; // Continua para próxima iteração
                        }
                    }
                    
                } else if (parte_movimento == 2 && movimento_horizontal < 1) {
                    // Segunda parte: movimento horizontal (1 casa para a direita)
                    
                    for (j = 1; j <= 1; j++) { // Loop interno para movimento horizontal
                        printf("Movimento %d - Parte horizontal do L:\n", i);
                        printf("Direita\n");
                        movimento_horizontal++;
                        
                        // Condição para terminar o movimento completo
                        if (movimento_horizontal == 1) {
                            break; // Sai do loop quando movimento está completo
                        }
                    }
                    
                } else {
                    // Condição de segurança - se algo der errado, para o loop
                    printf("Movimento L completado!\n");
                    break;
                }
            }
            
            printf("Cavalo completou movimento em L: %d casas para cima + %d casa para a direita!\n", 
                   movimento_vertical, movimento_horizontal);
            printf("(Implementado com loops complexos, continue e break)\n\n");
            break;
        }

        // Pergunta se o jogador quer continuar
        printf("Deseja jogar novamente? (1 = Sim, 0 = Não): ");
        scanf("%d", &continuar_jogo);
        printf("\n");
    };

    printf("Obrigado por jogar!\n");
    printf("=== JOGO FINALIZADO ===\n");

    return 0;
}
