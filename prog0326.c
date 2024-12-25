/*Escreva um programa que verifique o numero de dias existentes em um mes (fevereiro = 28 dias) SWITCH SEM BREAK*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int mes;

    printf("Digite o numero de um mes:");
    scanf("%d", &mes);
    switch (mes){
        case 1:
            printf("O mes %d tem 31 dias.\n", mes);
        case 2:
            printf("O mes %d tem 28 dias.\n", mes);
        case 3:
            printf("O mes %d tem 31 dias.\n", mes);
        case 4:
            printf("O mes %d tem 30 dias.\n", mes);
        case 5:
            printf("O mes %d tem 31 dias.\n", mes);
        case 6:
            printf("O mes %d tem 30 dias.\n", mes);
        case 7:
            printf("O mes %d tem 31 dias.\n", mes);
        case 8:
            printf("O mes %d tem 31 dias.\n", mes);
        case 9:
            printf("O mes %d tem 30 dias.\n", mes);
        case 10:
            printf("O mes %d tem 31 dias.\n", mes);
        case 11:
            printf("O mes %d tem 30 dias.\n", mes);
        case 12:
            printf("O mes %d tem 31 dias.\n", mes);
        default:
            printf("Mes invalido.\n");
    }
}