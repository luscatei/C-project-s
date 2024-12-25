#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int d, m, a;

    printf("Digite uma data (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &d, &m, &a);

    if(d < 1 || d > 31 || m < 1 || m > 12){
        printf("Data invalida.\n");
        exit(1);
    } else if (m == 2){
        if (d > 28){
            printf("Data invalida.\n");
            exit(1);
        }
    } else if (m == 4 || m == 6 || m == 9 || m == 11){
        if (d > 30){
            printf("Data invalida.\n");
            exit(1);
        }
    } else if (d > 31){
            printf("Data invalida.\n");
            exit(1);
    } else if (a < 0){
        printf("Data invalida.\n");
        exit(1);
    } else {
        printf("Data valida.\n");
    }
}