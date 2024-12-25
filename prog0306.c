#include <stdio.h>

int main(){

    float salario, imposto;

    printf("Digite o salario do funcionario:\n");
    scanf("%f", &salario);
    if(salario <= 0){
        printf("O valor informado e invalido\n");
    }
    else if(salario >= 1000){
        printf("O funcionario paraga 10%% de imposto\nCorrespondente a R$ %.2f\n", salario * 0.10);
    }
    else {
        printf("O funcionario pagara 5%% de imposto\nCorrespondente a R$ %2.f\n", salario * 0.05);
    }

    return 0;
}