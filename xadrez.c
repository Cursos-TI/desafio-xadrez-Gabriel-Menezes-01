#include <stdio.h>

int main() {
    // ===============================================
    // SIMULADOR DE MOVIMENTOS DE PEÇAS DE XADREZ
    // ===============================================
    
    printf("=== SIMULADOR DE MOVIMENTOS DE XADREZ ===\n\n");
    
    // Variáveis para controlar o número de casas de movimento
    int casas_torre = 5;        // Torre se move 5 casas para a direita
    int casas_bispo = 5;        // Bispo se move 5 casas na diagonal (cima-direita)
    int casas_rainha = 8;       // Rainha se move 8 casas para a esquerda
    
    // Variáveis de controle para os loops
    int i;                      // Contador para loop for (Torre)
    int contador_while = 0;     // Contador para loop while (Bispo)
    int contador_do_while = 0;  // Contador para loop do-while (Rainha)
    
    // ===============================================
    // MOVIMENTO DA TORRE - Usando estrutura FOR
    // ===============================================
    printf("🏰 TORRE: Movimento horizontal para a DIREITA (%d casas)\n", casas_torre);
    printf("A Torre se move em linha reta (horizontal ou vertical)\n");
    printf("Movimento: ");
    
    // Loop FOR para simular movimento da Torre
    for (i = 1; i <= casas_torre; i++) {
        printf("Direita");
        
        // Se não é a última casa, adiciona uma seta para mostrar continuidade
        if (i < casas_torre) {
            printf(" -> ");
        }
    }
    printf("\n");
    printf("Torre completou %d movimentos para a direita!\n\n", casas_torre);
    
    // ===============================================
    // MOVIMENTO DO BISPO - Usando estrutura WHILE
    // ===============================================
    printf("⛪ BISPO: Movimento diagonal CIMA-DIREITA (%d casas)\n", casas_bispo);
    printf("O Bispo se move sempre na diagonal\n");
    printf("Movimento: ");
    
    // Loop WHILE para simular movimento do Bispo
    contador_while = 0;
    while (contador_while < casas_bispo) {
        contador_while++;
        
        // Movimento diagonal = combinação de duas direções
        printf("Cima, Direita");
        
        // Se não é a última casa, adiciona uma seta para mostrar continuidade
        if (contador_while < casas_bispo) {
            printf(" -> ");
        }
    }
    printf("\n");
    printf("Bispo completou %d movimentos na diagonal cima-direita!\n\n", contador_while);
    
    // ===============================================
    // MOVIMENTO DA RAINHA - Usando estrutura DO-WHILE
    // ===============================================
    printf("👑 RAINHA: Movimento horizontal para a ESQUERDA (%d casas)\n", casas_rainha);
    printf("A Rainha pode se mover em qualquer direção\n");
    printf("Movimento: ");
    
    // Loop DO-WHILE para simular movimento da Rainha
    contador_do_while = 0;
    do {
        contador_do_while++;
        
        printf("Esquerda");
        
        // Se não é a última casa, adiciona uma seta para mostrar continuidade
        if (contador_do_while < casas_rainha) {
            printf(" -> ");
        }
        
    } while (contador_do_while < casas_rainha);
    
    printf("\n");
    printf("Rainha completou %d movimentos para a esquerda!\n\n", contador_do_while);
    
    // ===============================================
    // RESUMO DOS MOVIMENTOS
    // ===============================================
    printf("=== RESUMO DOS MOVIMENTOS ===\n");
    printf("🏰 Torre:  %d casas para a direita (estrutura FOR)\n", casas_torre);
    printf("⛪ Bispo:  %d casas na diagonal cima-direita (estrutura WHILE)\n", casas_bispo);
    printf("👑 Rainha: %d casas para a esquerda (estrutura DO-WHILE)\n", casas_rainha);
    printf("\nSimulação concluída com sucesso!\n");
    
    return 0;
}
