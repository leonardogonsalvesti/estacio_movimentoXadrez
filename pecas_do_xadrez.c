#include <stdio.h>

// Programa para simular os movimentos da Torre, Bispo e Rainha no xadrez

int main()
{
    

    // ------------------------
    // Movimento da TORRE (5 casas para a direita)
    // Estrutura: PARA (for)    
    // ------------------------
    
    for (int i = 1; i <= 5; i++) {
        printf("TORRE: Direita\n");
    }
    

    // ------------------------
    // Movimento do BISPO (5 casas na diagonal cima-direita)
    // Estrutura: ENQUANTO (while)
    // ------------------------
    
    int b = 1;
    while ( b <= 5) {
        printf("BISPO: Cima Direita\n");
        b++;
    }

    // ------------------------
    // Movimento da RAINHA (8 casas para a esquerda)
    // Estrutura: REPITA (do-while)
    // ------------------------
    
    int r = 1;
   
    do {
               
        if (r <= 8) {
            printf("Rainha: Esquerda\n");
            r++;
        }
    } while (r <= 8);
   
    printf("FIM DO PROGRAMA. Saindo...\n");




    return 0;
}

    