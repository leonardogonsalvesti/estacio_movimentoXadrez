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


    // ------------------------
    // Movimento do CAVALO (move duas casas em uma direção (horizontal ou vertical) e depois uma casa perpendicularmente, formando um "L")
    // Estrutura: dois loops aninhados, sendo um deles obrigatoriamente um loop for
    // ------------------------
    
    for (int i = 1; i <= 3; i++) {
        printf("CAVALO: Direita\n");        
        
        while (i==3)
        {
           for ( int c = 0; c < 2; c++)
           {
            printf("CAVALO: Esquerda\n"); 
           }
           
              break;
        } 
             
        
    }  
    

    printf("FIM DO PROGRAMA. Saindo...\n");
    return 0;
}

    
