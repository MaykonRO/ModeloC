#include <stdio.h>
#define ex1

void main(){
    int opcao;
    do{
        printf("deseja continuar o programa? (1 para sim 0 para nao) ");
        scanf("%d", &opcao);
    } while (opcao == 1);
}



