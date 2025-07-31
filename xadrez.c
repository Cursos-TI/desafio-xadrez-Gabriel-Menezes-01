#include <stdio.h>

int main()
{
    // ===============================================
    // JOGO INTERATIVO DE MOVIMENTOS DE XADREZ
    // ===============================================

    printf("=== JOGO INTERATIVO DE MOVIMENTOS DE XADREZ ===\n\n");
    printf("Bem-vindos, jogadores!\n");
    printf("Escolham uma peça e definam quantas casas ela deve se mover.\n\n");

    // Variáveis para entrada do usuário
    int escolha_peca;
    int casas_movimento;
    int continuar_jogo = 1;
    
    // Variáveis de controle para os loops
    int i;                     // Contador para loop for (Torre e Cavalo)
    int contador_while = 0;    // Contador para loop while (Bispo)
    int contador_do_while = 0; // Contador para loop do-while (Rainha)
    int j;                     // Contador para loop while aninhado (Cavalo)

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
        case 1: // TORRE
            printf("\nQuantas casas a Torre deve se mover para a direita? ");
            scanf("%d", &casas_movimento);
            
            printf("\n🏰 TORRE: Movimento horizontal para a DIREITA (%d casas)\n", casas_movimento);
            printf("A Torre se move em linha reta (horizontal ou vertical)\n");
            printf("Movimento: ");

            // Loop FOR para simular movimento da Torre
            for (i = 1; i <= casas_movimento; i++)
            {
                printf("Direita");
                if (i < casas_movimento)
                {
                    printf(" -> ");
                }
            }
            printf("\nTorre completou %d movimentos para a direita!\n\n", casas_movimento);
            break;

        case 2: // BISPO
            printf("\nQuantas casas o Bispo deve se mover na diagonal? ");
            scanf("%d", &casas_movimento);
            
            printf("\n⛪ BISPO: Movimento diagonal CIMA-DIREITA (%d casas)\n", casas_movimento);
            printf("O Bispo se move sempre na diagonal\n");
            printf("Movimento: ");

            // Loop WHILE para simular movimento do Bispo
            contador_while = 0;
            while (contador_while < casas_movimento)
            {
                contador_while++;
                printf("Cima, Direita");
                if (contador_while < casas_movimento)
                {
                    printf(" -> ");
                }
            }
            printf("\nBispo completou %d movimentos na diagonal cima-direita!\n\n", contador_while);
            contador_while = 0; // Reset para próxima jogada
            break;

        case 3: // RAINHA
            printf("\nQuantas casas a Rainha deve se mover para a esquerda? ");
            scanf("%d", &casas_movimento);
            
            printf("\n👑 RAINHA: Movimento horizontal para a ESQUERDA (%d casas)\n", casas_movimento);
            printf("A Rainha pode se mover em qualquer direção\n");
            printf("Movimento: ");

            // Loop DO-WHILE para simular movimento da Rainha
            contador_do_while = 0;
            do
            {
                contador_do_while++;
                printf("Esquerda");
                if (contador_do_while < casas_movimento)
                {
                    printf(" -> ");
                }
            } while (contador_do_while < casas_movimento);
            
            printf("\nRainha completou %d movimentos para a esquerda!\n\n", contador_do_while);
            contador_do_while = 0; // Reset para próxima jogada
            break;

        case 4: // CAVALO
            printf("\nO Cavalo fará um movimento em L (2 casas para baixo + 1 casa para a esquerda)\n");
            printf("Pressione ENTER para executar o movimento...");
            getchar(); // Limpa o buffer
            getchar(); // Espera o usuário pressionar ENTER
            
            printf("\n🐴 CAVALO: Movimento em \"L\" - BAIXO-BAIXO-ESQUERDA\n");
            printf("O Cavalo se move em \"L\": duas casas numa direção + uma casa perpendicular\n");
            printf("Movimento do Cavalo:\n");

            // Loop FOR externo para controlar as duas partes do movimento em L
            for (i = 1; i <= 2; i++)
            {
                if (i == 1)
                {
                    // Primeira parte do L: movimento vertical (2 casas para baixo)
                    printf("Parte %d do movimento em L - Movimento vertical:\n", i);
                    j = 0;
                    while (j < 2) // 2 casas para baixo
                    {
                        printf("Baixo\n");
                        j++;
                    }
                }
                else
                {
                    // Segunda parte do L: movimento horizontal (1 casa para a esquerda)
                    printf("Parte %d do movimento em L - Movimento horizontal:\n", i);
                    j = 0;
                    while (j < 1) // 1 casa para a esquerda
                    {
                        printf("Esquerda\n");
                        j++;
                    }
                }
            }
            printf("Cavalo completou movimento em L: 2 casas para baixo + 1 casa para a esquerda!\n\n");
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
