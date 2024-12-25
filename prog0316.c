/*Escreva um programa que leia uma operação binaria entre dois inteiros e apresente em seguida o resultado dessa operacao sobre dois inteiros*/

#include <stdio.h>

int main(){
    int num1, num2, res;
    char op;

    printf("Escreva uma operacao\n");
    scanf("%d %c %d", &num1, &op, &num2);
    
    switch (op){
        case '+':
            res = num1 + num2;
            break;
        case '-':
            res = num1 - num2;
            break;
        case 'x':
        case 'X':
        case '*':
            res = num1 * num2;
            break;
        case '\\':
        case ':':
        case '/':
            res = num1 / num2;
            break;
        default:
            printf("Operacao invalida\n");
    }
    
    printf("%d %c %d = %d\n", num1, op, num2, res);
    
}