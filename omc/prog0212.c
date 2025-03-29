#include <stdio.h>

main (){
    char c1, c2;
    
    printf("Escreva um caractere para ser exibido na ultima mensagem.\n");
    scanf("%c", &c1);
    printf("\nEscreva mais um caractere.\n");
    scanf(" %c", &c2);
    printf("\nEsse foram os caracteres informados '%c' '%c'.", c1, c2);

    return 0;

}