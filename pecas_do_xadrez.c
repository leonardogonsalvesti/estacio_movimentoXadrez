#include <stdio.h>

//movimento da torre baseado nos 4 lados que a torre pode ir, cima, baixo, direita, esquerda.
void Movimento_Torre(int Quantidade_casasTorre,int direcao){
    
    switch (direcao) {
        case 1:
            if (Quantidade_casasTorre >= 1) {
                printf("%d ", Quantidade_casasTorre);  // Imprime o valor atual de casas
                printf("TORRE:Andar Para Cima\n");        
                Movimento_Torre(Quantidade_casasTorre - 1,direcao);  // Chama a si mesma com casas + 1
            } 
            break;
        case 2:
            if (Quantidade_casasTorre >= 1) {
                printf("%d ", Quantidade_casasTorre);  // Imprime o valor atual de casas
                printf("TORRE:Andar Para Baixo\n");        
                Movimento_Torre(Quantidade_casasTorre - 1,direcao);  // Chama a si mesma com casas + 1
            } 
          break;
        case 3:
            if (Quantidade_casasTorre >= 1) {
                printf("%d ", Quantidade_casasTorre);  // Imprime o valor atual de casas
                printf("TORRE:Andar para Esquerda\n");        
                Movimento_Torre(Quantidade_casasTorre - 1,direcao);  // Chama a si mesma com casas + 1
            } 
          break;
        case 4:
            if (Quantidade_casasTorre >= 1) {
                printf("%d ", Quantidade_casasTorre);  // Imprime o valor atual de casas
                printf("TORRE:Andar para Direita\n");        
                Movimento_Torre(Quantidade_casasTorre - 1,direcao);  // Chama a si mesma com casas + 1
            }     
          break;
        default:
          printf("Movimento inválido. Tente novamente.\n");
      }
       
}


void Movimento_Bispo(int Quantidade_casasBispo, int direcao){


    switch (direcao) {
        case 1:
            while (Quantidade_casasBispo >= 1){
                for (int i = Quantidade_casasBispo; i == Quantidade_casasBispo; i++){
                    printf("%d ", Quantidade_casasBispo);  // Imprime o valor atual de casas
                    printf("BISPO: Cima / Direita\n"); ;
                    break;
                }                      
                Movimento_Bispo(Quantidade_casasBispo - 1,direcao);  // Chama a si mesma com casas + 1
                break;//GARANTE A SAIDA DO LOOP. 
            }
            break;
        case 2:
            while (Quantidade_casasBispo >= 1){
                for (int i = Quantidade_casasBispo; i == Quantidade_casasBispo; i++){
                    printf("%d ", Quantidade_casasBispo);  // Imprime o valor atual de casas
                    printf("BISPO: Cima / Esquerda\n"); 
                    break;
                }                      
                Movimento_Bispo(Quantidade_casasBispo - 1,direcao);  // Chama a si mesma com casas + 1
                break;//GARANTE A SAIDA DO LOOP. 
            }
            break;
        case 3:
            while (Quantidade_casasBispo >= 1){
                printf("%d ", Quantidade_casasBispo);  // Imprime o valor atual de casas
                for (int i = Quantidade_casasBispo; i == Quantidade_casasBispo; i++){
                    
                    printf("BISPO: Baixo / Direita\n");
                    break;
                }                      
                Movimento_Bispo(Quantidade_casasBispo - 1,direcao);  // Chama a si mesma com casas + 1
                break;//GARANTE A SAIDA DO LOOP. 
            }
        
          break;
        case 4:        
            while (Quantidade_casasBispo >= 1){
                for (int i = Quantidade_casasBispo; i == Quantidade_casasBispo; i++){                    
                    printf("%d ", Quantidade_casasBispo);  // Imprime o valor atual de casas
                    printf("BISPO: Baixo / Esquerda\n"); 
                    break;
                }                     
                Movimento_Bispo(Quantidade_casasBispo - 1,direcao);  // Chama a si mesma com casas + 1
                break;//GARANTE A SAIDA DO LOOP. 
            }
    
            break;
        default:
          printf("Movimento inválido. Tente novamente.\n");
      }
        
}


void Movimento_Rainha(int Quantidade_casasRainha,int direcao){

    switch (direcao) {
        case 1:
            while (Quantidade_casasRainha >= 1){
                printf("%d ", Quantidade_casasRainha);  // Imprime o valor atual de casas
                printf("Rainha: Para Cima\n");      
                Movimento_Rainha(Quantidade_casasRainha - 1,direcao);  // Chama a si mesma com casas + 1
                break;//GARANTE A SAIDA DO LOOP. 
            } 
            break;
        case 2:
            while (Quantidade_casasRainha >= 1){
                printf("%d ", Quantidade_casasRainha);  // Imprime o valor atual de casas
                printf("Rainha: Para Baixo\n");      
                Movimento_Rainha(Quantidade_casasRainha - 1,direcao);  // Chama a si mesma com casas + 1
                break;//GARANTE A SAIDA DO LOOP. 
            } 
            
          break;
        case 3:
            while (Quantidade_casasRainha >= 1){
                printf("%d ", Quantidade_casasRainha);  // Imprime o valor atual de casas
                printf("Rainha: Para Esquerda\n");
                Movimento_Rainha(Quantidade_casasRainha - 1,direcao);  // Chama a si mesma com casas + 1
                break;//GARANTE A SAIDA DO LOOP. 
            } 
            
          break;
        case 4:
            while (Quantidade_casasRainha >= 1){
                printf("%d ", Quantidade_casasRainha);  // Imprime o valor atual de casas
                printf("Rainha: Para Direita\n");
                Movimento_Rainha(Quantidade_casasRainha - 1,direcao);  // Chama a si mesma com casas + 1
                break;//GARANTE A SAIDA DO LOOP. 
            } 
            
          break;
        case 5:
            while (Quantidade_casasRainha >= 1){
                printf("%d ", Quantidade_casasRainha);  // Imprime o valor atual de n
                printf("Rainha: Para Cima / Direita\n");
                Movimento_Rainha(Quantidade_casasRainha - 1,direcao);  // Chama a si mesma com casas + 1
                break;//GARANTE A SAIDA DO LOOP. 
            } 
            
          break;
        case 6:
            while (Quantidade_casasRainha >= 1){
                printf("%d ", Quantidade_casasRainha);  // Imprime o valor atual de casas
                printf("Rainha: Para Cima / Esquerda\n");
                Movimento_Rainha(Quantidade_casasRainha - 1,direcao);  // Chama a si mesma com casas + 1
                break;//GARANTE A SAIDA DO LOOP. 
            } 
            
          break;
        case 7:
            while (Quantidade_casasRainha >= 1){
                printf("%d ", Quantidade_casasRainha);  // Imprime o valor atual de casas
                printf("Rainha: Para Baixo / Direita\n");
                Movimento_Rainha(Quantidade_casasRainha - 1,direcao);  // Chama a si mesma com n + 1
                break;//GARANTE A SAIDA DO LOOP. 
            } 
            
          break;
        case 8:
            while (Quantidade_casasRainha >= 1){
                printf("%d ", Quantidade_casasRainha);  // Imprime o valor atual de casas
                printf("Rainha: Para Baixo / Esquerda\n");
                Movimento_Rainha(Quantidade_casasRainha - 1,direcao);  // Chama a si mesma com n + 1
                break;//GARANTE A SAIDA DO LOOP. 
            } 
            
          break;
        default:
          printf("Movimento inválido. Tente novamente.\n");
      }   

      
}



void Movimento_Cavalo(int quantidade_CasasCavalo,int direcao){
       
    switch (direcao){
    case 1:
        while (quantidade_CasasCavalo >=2){
            printf("%d ", quantidade_CasasCavalo);  // Imprime o valor atual de casas
            printf("CAVALO: para cima\n");//tem que imprimir duas vezes 
            Movimento_Cavalo(quantidade_CasasCavalo - 1,direcao);  // Chama a si mesma com n + 1
             
            while (quantidade_CasasCavalo <=2){
                printf("1 CAVALO: a direita\n"); //tem que imprimir uma vez
                Movimento_Cavalo(quantidade_CasasCavalo - 1,direcao);
                break;
            }
            break;//GARANTE A SAIDA DO LOOP.           
            
        }       
        break;
    case 2:
        while (quantidade_CasasCavalo >=2){
            printf("%d ", quantidade_CasasCavalo);  // Imprime o valor atual de casas
            printf("CAVALO: para cima\n");//tem que imprimir duas vezes 
            Movimento_Cavalo(quantidade_CasasCavalo - 1,direcao);  // Chama a si mesma com n + 1
            
            while (quantidade_CasasCavalo <=2){                
                printf("1 CAVALO:para a Esquerda\n"); //tem que imprimir uma vez
                Movimento_Cavalo(quantidade_CasasCavalo - 1,direcao);
                break;
            }
            break;//GARANTE A SAIDA DO LOOP.           
            
        }     
        break;
    case 3:
        while (quantidade_CasasCavalo >=2){
            printf("%d ", quantidade_CasasCavalo);  // Imprime o valor atual de casas
            printf("CAVALO: para a direita\n");//tem que imprimir duas vezes 
            Movimento_Cavalo(quantidade_CasasCavalo - 1,direcao);  // Chama a si mesma com n + 1
            
            while (quantidade_CasasCavalo <=2){                
                printf("1 CAVALO: para cima\n"); //tem que imprimir uma vez
                Movimento_Cavalo(quantidade_CasasCavalo - 1,direcao);
                break;
            }
            break;//GARANTE A SAIDA DO LOOP.           
            
        }             
        break;
    case 4:       
        while (quantidade_CasasCavalo >=2){
            printf("%d ", quantidade_CasasCavalo);  // Imprime o valor atual de casas
            printf("CAVALO: para a Esquerda\n");//tem que imprimir duas vezes 
            Movimento_Cavalo(quantidade_CasasCavalo - 1,direcao);  // Chama a si mesma com n + 1
            
            while (quantidade_CasasCavalo <=2){                
                printf("1 CAVALO: para cima\n"); //tem que imprimir uma vez
                Movimento_Cavalo(quantidade_CasasCavalo - 1,direcao);
                break;
            }
            break;//GARANTE A SAIDA DO LOOP.           
            
        }  
        break;
    case 5:
        while (quantidade_CasasCavalo >=2){
            printf("%d ", quantidade_CasasCavalo);  // Imprime o valor atual de casas
            printf("CAVALO:  para baixo\n");//tem que imprimir duas vezes 
            Movimento_Cavalo(quantidade_CasasCavalo - 1,direcao);  // Chama a si mesma com n + 1
            
            while (quantidade_CasasCavalo <=2){                
                printf("1 CAVALO: para a direita\n"); //tem que imprimir uma vez
                Movimento_Cavalo(quantidade_CasasCavalo - 1,direcao);
                break;
            }
            break;//GARANTE A SAIDA DO LOOP.           
            
        }
        break;
    case 6: 
        while (quantidade_CasasCavalo >=2){
            printf("%d ", quantidade_CasasCavalo);  // Imprime o valor atual de casas
            printf("CAVALO:  para baixo\n");//tem que imprimir duas vezes 
            Movimento_Cavalo(quantidade_CasasCavalo - 1,direcao);  // Chama a si mesma com n + 1
            
            while (quantidade_CasasCavalo <=2){                
                printf("1 CAVALO: para a Esquerda\n"); //tem que imprimir uma vez
                Movimento_Cavalo(quantidade_CasasCavalo - 1,direcao);
                break;
            }
            break;//GARANTE A SAIDA DO LOOP.           
            
        }       
        break;
    case 7:
        while (quantidade_CasasCavalo >=2){
            printf("%d ", quantidade_CasasCavalo);  // Imprime o valor atual de casas
            printf("CAVALO:  para direita\n");//tem que imprimir duas vezes 
            Movimento_Cavalo(quantidade_CasasCavalo - 1,direcao);  // Chama a si mesma com n + 1
            
            while (quantidade_CasasCavalo <=2){                
                printf("1 CAVALO: para a baixo\n"); //tem que imprimir uma vez
                Movimento_Cavalo(quantidade_CasasCavalo - 1,direcao);
                break;
            }
            break;//GARANTE A SAIDA DO LOOP.           
            
        }        
        break;
    case 8: 
        while (quantidade_CasasCavalo >=2){
            printf("%d ", quantidade_CasasCavalo);  // Imprime o valor atual de casas
            printf("CAVALO:  para Esquerda\n");//tem que imprimir duas vezes 
            Movimento_Cavalo(quantidade_CasasCavalo - 1,direcao);  // Chama a si mesma com n + 1
            
            while (quantidade_CasasCavalo <=2){                
                printf("1 CAVALO: para a baixo\n"); //tem que imprimir uma vez
                Movimento_Cavalo(quantidade_CasasCavalo - 1,direcao);
                break;
            }
            break;//GARANTE A SAIDA DO LOOP.           
            
        }       
        break;

    default:
        printf("Movimento Invalido!\n");
        break;
    }



}


int main(){
    //DECLARAÇÃO DE VARIAVEIS, ONDE DETERMINO A QUANTIDADE DE CASAS QUE VAI ANTAR E A DIREÇÃO.
    //quantas casas andar.
    int mov_torre = 5,mov_bispo = 5, mov_rainha = 8,mov_CavaloA=3;  
    //DETERMINA A DIREÇÃO ENTRE 1 A 8, ALGUMAS PEÇAS SÓ TEM 4 POSSIBILIDADES DE MOVIMENTO
    int Direcao_torre = 1;
    int direcao_bispo = 1;
    int direcao_rainha = 3;
    int direcao_CavaloA=1;

    /*
            CADA NUMERO DEFINE A DIRECAO QUE A PEÇA VAI ANDAR NO MEU CODIGO.

            Torre: Anda qualquer número de casas:
            1	Para cima,  2	Para baixo,  3	Para a esquerda,  4	Para a direita  
            
            Bispo: Anda qualquer número de casas na diagonal:
            1   Para cima e direita, 2	Para cima e esquerda, 3	Para baixo e direita, 4	Para baixo e esquerda

            Dama (Rainha): Combina os movimentos da torre e do bispo: Qualquer número de casas:
            Para cima, para baixo, para os lados (como a torre),Na diagonal (como o bispo)
            1	Para cima,  2	Para baixo,  3	Para a esquerda,  4	Para a direita
            5   Para cima e direita, 6	Para cima e esquerda, 7	Para baixo e direita, 8	Para baixo e esquerda

            Cavalo: Movimento em L:
            2 casas em uma direção (cima, baixo, esquerda ou direita) e depois 1 casa em ângulo reto (perpendicular).
           
           


    
    */

    printf("------------------------\n");

    Movimento_Torre(mov_torre,Direcao_torre);    
    printf("------------------------\n");

    Movimento_Bispo(mov_bispo,direcao_bispo);
    printf("------------------------\n");

    Movimento_Rainha(mov_rainha,direcao_rainha);
    printf("------------------------\n");

    Movimento_Cavalo(mov_CavaloA,direcao_CavaloA);
    printf("------------------------\n");
    
    
    printf("FIM DO PROGRAMA. Saindo...\n");
    return 0;
}

    
