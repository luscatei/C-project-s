// Task:
// Write a program that returns all multiples of a given input number.

#include <stdio.h>
#include <stdlib.h>

int main() {
    //x = fator1    y = fator2    z = resultado
    int x, y = 0;

    printf("Digite um numero para \"fator1\"\n\n"); scanf("%d", &x);

    for (x = 0; x <= 10; x++){
        y = 0; /* This line was needed to reset the value of y for each iteration, 
        allowing the code to display the multiplication tables 
        for all numbers up to the value specified by the variable. */ 
        while (y <= 10){
            printf("\n%d x %3d = %3d", x, y, x*y);
            y++;
        }
        printf("\n--------------------------------");
    }
}