#include <stdio.h>

int main() {

    int x;

    scanf("%d", &x);

    switch (x = 0){
        case 0:
            printf("Esse numero e igual a zero.");
            break;
        default:
            if ( x !=0 ){
                printf("Esse numero nao e igual a zero.");
            }
        break;
    }
}