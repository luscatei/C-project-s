// #include <stdio.h>

// int main(){

//     float salario, imposto;

//     printf("Informe o valor do salario do funcionario:\n");
//     scanf("%f", &salario);
//     if(salario <= 0){
//         printf("O valor informado e invalido\n");
//     }
//     else if(salario <= 1000){
//         printf("O funcionario pagara 5%% de imposto.\nCorrespondente a R$ %.2f.\nCom o valor liquido final de R$ %.2f.\n", salario * 0.05, salario - (salario * 0.05));
//     }
//     else if(salario >= 1000 && salario <= 5000){
//         printf("O funcionario pagara 11%% de imposto correspondente a R$ %.2f.\nCom o valor liquido final de R$ %.2f.\n", salario * 0.11, salario - (salario * 0.11));
//     }
//     else {
//         printf("O funcionario pagara 35%% de imposto correspondente a R$ %.2f.\nCom o valor liquido final de R$ %.2f.\n", salario * 0.35, salario - (salario * 0.35));
//     }
// }

#include <stdio.h>

int main(){
    
    float salario, taxa;

    printf("Informe salario:\n");
    scanf("%f", &salario);
    if(salario < 1000){
        taxa = 0.05;
    }
    else if(salario < 5000){
        taxa = 0.11;
    }
    else{
        taxa = 0.35;
    }
    printf("Salario R$ %.2f.\nO funcionario pagara %.2f%% de imposto.\nCorrespondente a R$ %.2f.\nE o liquido sendo R$ %.2f.\n", salario, taxa * 100, salario * taxa, salario*(1 - taxa));
}