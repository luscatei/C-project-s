/*Escreva um programa de quatro formas distintas, que leia um inteiro e indique se esse inteiro é ou não igual a zero.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    //primeira forma
    if(n == 0){
        printf("O numero e igual a zero.\n");
    }else{
        printf("O numero nao e igual a zero.\n");
    }
    //segunda forma
    if(n != 0){
        printf("O numero nao e igual a zero.\n");
    }else{
        printf("O numero e igual a zero.\n");
    }
    //terceira forma
    if(n > 0 || n < 0){
        printf("O numero nao e igual a zero.\n");
    }else{
        printf("O numero e igual a zero.\n");
    }
    //quarta forma
    if(n){
        printf("O numero nao e igual a zero.\n");
    }else{
        printf("O numero e igual a zero.\n");
    }
    return 0;
}