#include <stdio.h>
#define ex1

void main(){
    int opcao;
    do{
        printf("deseja encerrar o programa? ");
        scanf("%d", &opcao);
    } while (opcao == 1);
}
