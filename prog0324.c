/*Escreva um programa que verifique o numero de dias existentes em um mes (fevereiro = 28 dias) IF-ELSE*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int mes;
    
    if (mes < 1 || mes > 12){
        printf("Mes invalido.\n");
        exit(1);
    }
    else if (mes == 2){
        printf("O mes %d tem 28 dias.\n", mes);
    }
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
        printf("O mes %d tem 30 dias.\n", mes);
    }
    else{
        printf("O mes %d tem 31 dias.\n", mes);
    }
}
