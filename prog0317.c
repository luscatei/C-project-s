//Escreva um programa que determine a quantidade de segundos, minutos e milisegundos em um dado numero de horas.

#include <stdio.h>

int main(){
    int horas, segundos, minutos, milisegundos;
    
    printf("Escreva um numero de horas\n");
    scanf("%d", &horas);
    
    segundos = horas * 3600;
    minutos = horas * 60;
    milisegundos = horas * 3600000;
    
    printf("%d horas sao %d segundos, %d minutos e %d milisegundos\n", horas, segundos, minutos, milisegundos);
    
    return 0;
}