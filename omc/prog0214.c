#include <stdio.h>

int main(){

    int x;

    printf("Digite um numero entre 0 e 255\n\n");
    scanf("%d", &x);
    printf("O numero digitado foi %d.E seu codigo ASII e %c.\n", x, (char) x);
    printf("O proximo caractere e %c tem o ASSI %d\n", (char) (x+1), x+1);
  
    return 0;
}