//Este programa aplica determinada porcentagem de imposto para casados e outra para solteiros

#include <stdio.h>

int main(){

    float salario;
    char estadoCivil;

    printf("Informe o salario\n");
    scanf("%f", &salario);
    printf("Informe o estado civil\n");
    scanf(" %c", &estadoCivil);

    if (estadoCivil == 'c' || estadoCivil == 'C'){
        printf("Imposto R$ %.2f\n", salario * 0.09);
    }
    else if (estadoCivil == 's' || estadoCivil == 'S'){
        printf("Imposto R$ %.2f\n", salario * 0.10);
    }

}