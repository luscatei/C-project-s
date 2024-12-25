#include <stdio.h>

int main(){

    int d, m, a;

    printf("Digite a data no formato dd/mm/aaaa:\n");

    scanf(" %d %d %d", &d, &m, &a);
    
    printf("Data: %d/%2.d/%d\n", d, m, a);

    printf("Digite a data no formato aaaa/mm/dd:\n");

    scanf(" %d %d %d", &a, &m, &d);

    printf("Data: %d/%2.d/%d\n", d, m, a);

    return 0;
}