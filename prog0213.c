#include <stdio.h>

int main(){

    char ch;

    printf("Digite um caractere: ");
    scanf("%c", &ch);
    printf("O caractere '%c' tem codigo ASCII n° %d\n", ch, (int) ch);

    return 0;
}