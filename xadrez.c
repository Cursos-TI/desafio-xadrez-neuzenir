#include <stdio.h>

int main(){

    int torre = 0, bispo = 0, rainha = 0;

    //Mover a Torre cinco casas para a direita

    printf ("Movimento da Torre:\n");

    for (torre; torre < 5; torre++){

        printf ("Direita\n"); // Imprime a direção do movimento
    }

        //Mover o Bispo cinco casas na diagonal para cima e à direita

        printf ("Movimento do Bispo:\n");

        while (bispo < 5){
    
            printf ("Cima, Direita\n"); // Imprime a direção do movimento
            bispo++;
        }

        //Mover a Rainha oito casas para a esquerda

        printf("Movimento da Rainha:\n");

        do {

            printf ("Esquerda\n"); // Imprime a direção do movimento

            rainha++;

        } while (rainha < 8);
        
            
        
    
    return 0;

}

