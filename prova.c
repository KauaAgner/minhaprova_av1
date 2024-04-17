// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int portaEscolhida, portaVazia, portaPremiada, portaEscolhida2;
    char opcao;
    srand(time(NULL)); 
    
    printf("Bem-vindo ao jogo Monty Hall!");
    printf("\nEscolha uma porta(1, 2 ou 3): ");
    scanf("%d", &portaEscolhida);
    
    

portaPremiada = rand() % 3 + 1;
    
        
    
    do{
        portaVazia = rand() % 3 + 1;
    } while(portaVazia == portaEscolhida || portaVazia == portaPremiada);
        
    printf("O apresentador abriu a porta %d que está vazia!", portaVazia);

    printf("\nVocê deseja trocar de porta? (s/n): ");
    scanf(" %c", &opcao);
    
    if(opcao = 's'){
        do{
        portaEscolhida2 = rand() % 3 + 1;
        } while(portaEscolhida2 == portaEscolhida || portaEscolhida2 == portaVazia);
        printf("Você trocou para porta %d.", portaEscolhida2);
    }
    
    if(portaEscolhida2 == portaPremiada || portaEscolhida == portaPremiada ){
            printf("\nVocê ganhou! Parabéns!");
            }else{
            printf("\nVocê Perdeu! A porta premiada era %d", portaPremiada);
            }
    
    

    return 0;
}