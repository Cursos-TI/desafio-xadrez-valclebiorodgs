#include <stdio.h>  

// Função recursiva que simula o movimento da Torre
void moverTorre(int casas){
    if(casas > 0){  // Enquanto houver casas para mover
        printf("Direita\n");  // Move uma casa para a direita
        moverTorre(casas - 1);  // Chama recursivamente com uma casa a menos
    }
}

// Função recursiva que simula o movimento do Bispo
void moverBispo(int casas){
    if(casas > 0){  // Enquanto houver casas para mover
        printf("Cima, direita\n");  // Move uma casa na diagonal (cima + direita)
        moverBispo(casas - 1);  // Chama recursivamente com uma casa a menos
    }
}

// Função recursiva que simula o movimento da Rainha
void moverRainha(int casas){
    if (casas > 0){  // Enquanto houver casas para mover
        printf("Esquerda\n");  // Move uma casa para a esquerda
        moverRainha(casas - 1);  // Chama recursivamente com uma casa a menos
    }
}

// Função que simula o movimento do Cavalo em "L"
// Usa dois loops aninhados: for (obrigatório) + while
void moverCavalo() {
    for (int i = 0; i < 1; i++) { // Realiza apenas 1 movimento completo em "L"
        int j = 0;
        while (j < 2) {  // Move 2 casas para cima
            printf("Cima\n");
            j++;
        }
        printf("Direita\n");  // Depois move 1 casa para a direita
    }
}

// Função principal do programa
int main() {
    printf(" - DESAFIO DE XADREZ -\n");

    // Movimento da Torre: 5 casas à direita
    printf("\nA peça 'Torre' está se movendo 5 casas à direita:\n");
    moverTorre(5);

    // Movimento do Bispo: 5 casas na diagonal (cima + direita)
    printf("\nA peça 'Bispo' está se movendo 5 casas na diagonal para cima e à direita:\n");
    moverBispo(5);

    // Movimento da Rainha: 8 casas à esquerda
    printf("\nA peça 'Rainha' está se movendo 8 casas à esquerda:\n");
    moverRainha(8);

    // Movimento do Cavalo: 2 casas para cima + 1 para direita
    printf("\nA peça 'Cavalo' está se movendo em 'L' (2 casas para Cima, 1 para Direita): \n");
    moverCavalo();

    return 0;  
}
