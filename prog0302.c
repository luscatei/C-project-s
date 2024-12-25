#include <stdio.h>

int main(){

    int x;

    printf("Digite um numero para saber se é positivo ou negativo:\n");
    scanf("%d5", &x);
    if(x > 0){
    printf("O numero %d e positivo\n", x);
    }
    else{
    printf("O numero %d e negativo\n", x);
    }

}