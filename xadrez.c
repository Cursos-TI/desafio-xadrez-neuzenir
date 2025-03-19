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

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

//int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    //return 0;

