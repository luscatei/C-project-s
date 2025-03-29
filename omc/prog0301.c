#include <stdio.h>

int main(){

    int x1, x2;

    printf("Digite dois numeros inteiros:\n");

    scanf(" %d %d", &x1, &x2);

    printf("%d = %d : %d\n", x1, x2, x1 == x2);
    printf("%d > %d : %d\n", x1, x2, x1 > x2);
    printf("%d >= %d : %d\n", x1, x2, x1 >= x2);
    printf("%d < %d : %d\n", x1, x2, x1 < x2);
    printf("%d <= %d : %d\n", x1, x2, x1 <= x2);
    printf("%d != %d : %d\n", x1, x2, x1 != x2);

}