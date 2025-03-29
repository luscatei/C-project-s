/*Escreva um programa que devolva a tabuada de determinado numero.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    //x = fator1    y = fator2    z = resultado
    int x, y = 0;

    printf("Digite um numero para \"fator1\"\n\n"); scanf("%d", &x);

    for (x = 0; x <= 10; x++){
        y = 0; /*Precisava dessa linha para reiniciar o valo de y a cada iteração, dessa forma o codigo mostra a tabuadas de todos os numeros até o numero indicado pela vasriavel.*/ 
        while (y <= 10){
            printf("\n%d x %3d = %3d", x, y, x*y);
            y++;
        }
        printf("\n--------------------------------");
    }
}