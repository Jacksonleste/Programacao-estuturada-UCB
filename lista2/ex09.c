/*
    Desenvolva um algoritmo que leia um peso em quilogramas (kg) e apresente, por meio de
    outros dois sub-algoritmos (apresentaGrama e apresentaTonelada), o valor do peso
    informado em gramas e em toneladas respectivamente. A leitura e validação do peso deve ser
    feita por um outro sub-algoritmo chamado leValidaPeso.
*/

#include <stdio.h>

double leValidaPeso();
void apresentaGrama(double peso);
void apresentaTonelada(double peso);

int main(void){
    double peso;

    peso = leValidaPeso();
    printf("%.2lf", peso);

    apresentaGrama(peso);

    apresentaTonelada(peso);


    return 0;
}

double leValidaPeso(){
    double peso;
    printf("Insira um valor: ");
    scanf("%lf", &peso);

    return peso;
}

void apresentaGrama(double peso){
    double grama;
    grama = peso*1000;
    printf("\n\n%.2lfKg = %.2lfg\n", peso, grama);
}

void apresentaTonelada(double peso){
    double ton;
    ton = peso/1000;
    printf("%.2lfKg = %.2lfToneladas", peso, ton);
}