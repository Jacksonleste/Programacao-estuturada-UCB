/* 
    Fazer um algoritmo que leia as notas dos alunos de uma disciplina e mostre para cada aluno a
    sua média e se ele está aprovado ou reprovado. Cada aluno terá sempre 2 notas, uma nota
    teórica e uma nota prática. A média do aluno é obtida como a média ponderada entre a nota
    teórica (peso 3) e a nota prática (peso 7). O algoritmo principal deverá efetuar a leitura dos
    dados de entrada, acionar um sub- algoritmo para calcular a média do aluno e a seguir acionar
    um outro sub-algoritmo para apresentar se o aluno está aprovado ou reprovado. Para cada
    aluno deverão ser lidos as suas notas e seu nome.
*/

#include <stdio.h>

double calculaMedia(double teorica, double pratica);
void verificaStituacao(double media);

int main(void){

    double notas[2];

    printf("Nota teorica: ");
    scanf("%lf", &notas[0]);

    printf("Nota pratica: ");
    scanf("%lf", &notas[1]);
    

    verificaStituacao(calculaMedia(notas[0], notas[1]));

    return 0;
}

double calculaMedia(double teorica, double pratica){
    double media;

    media = (3*teorica + 7*pratica) / (3 + 7);

    return media;
}


void verificaStituacao(double media){
    printf("O aluno tem media %.1lf, ele foi: ", media);
    if (media > 7){
        printf("aprovado!!\n");
    }else{
        printf("reprovado! :(\n");
    }
}