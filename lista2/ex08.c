/* 
    Elabore um algoritmo que armazene o peso de 3 pessoas e depois organize-os de forma que
    os valores fiquem armazenados em ordem crescente de peso. Esta ordenação deverá ser feita
    e apresentada por um sub-algoritmo.

*/
#include <stdio.h>
#include <string.h>

void ordenaNUm(double *vetor);

int main(void){
    double num[3];

    for(int c=0; c<3; c++){
        printf("Insira o peso da pessoa %d: ", c+1);
        scanf("%lf", &num[c]);
    }

    ordenaNUm(num);


    return 0;
}

void ordenaNUm(double *vetor){
    double numOrd[3];

    for (int c=0; c<3;c++){
        if(vetor[0] < vetor[1] && vetor[0] < vetor[2]){
            numOrd[0] = vetor[0];
            if(vetor[1] < vetor[2]){
                numOrd[1] = vetor[1];
                numOrd[2] = vetor[2];
            }else{
                numOrd[1] = vetor[2];
                numOrd[2] = vetor[1];
            }
        }else if(vetor[1] < vetor[2] && vetor[1] < vetor[0]){
            numOrd[0] = vetor[1];
            if(vetor[0] < vetor[2]){
                numOrd[1] = vetor[0];
                numOrd[2] = vetor[2];
            }else{
                numOrd[1] = vetor[2];
                numOrd[2] = vetor[0];
            }
        }else{
            numOrd[0] = vetor[2];
            if(vetor[0] < vetor[1]){
                numOrd[1] = vetor[0];
                numOrd[2] = vetor[1];
            }else{
                numOrd[1] = vetor[1];
                numOrd[2] = vetor[0];
            }
        }
    }

    printf("\n\n");
    printf("Pesos informados ordenados em ordem crescente:\n");
    for(int c=0; c<3; c++){
        if(c!=2){
            printf("%.2lf - ", numOrd[c]);
        }else{
            printf("%.2lf", numOrd[c]);
        }
    }
}