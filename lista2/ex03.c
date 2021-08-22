/* Desenvolva um algoritmo que leia as duas notas de até 20 alunos e calcule as possíveis médias
finais para cada um deles, usando pelo menos 3 sub-algoritmos, um para cada tipo de média
apresentada nos itens a, b e c. Para cada aluno deverá ser lido as notas, chamado as três
funções e apresentado as médias no algoritmo principal
a) Média aritmética das duas notas
b) Média ponderada com peso 4 e 6 respectivamente
c) Média ponderada com peso 3 e 7 respectivamente */

double media(double n1, double n2){

    double media;
    
    media = (n1 + n2) / 2;

    return media;
}

double media_pond(double n1, double n2, int peso1, int peso2){
    double media;

    media = (n1*peso1 + n2*peso2) / (n1 + n2);

    return media;
}

#include <stdio.h>
int main (){ 

    int quant;

    do {
        printf("quantidade de alunos na turma: ");
        scanf("%d", &quant);
        if (quant > 20){
            printf("O valor maximo e 20! tente novamente.\n");
        }
    } while(quant > 20);

    double nota1[quant], nota2[quant];

    for (int c=0; c<quant; c++){
        printf("primeira nota do aluno %d: ", c);
        scanf("%lf", &nota1[c]);
        printf("segunda nota do aluno %d: ", c);
        scanf("%lf", &nota2[c]);
    }

    double media_notas[quant];
    printf("\e[H\e[2J");
    printf("a) Media aritmética das duas notas\n");
    printf("b) Media ponderada com peso 4 e 6 respectivamente \n"); 
    printf("c) Media ponderada com peso 3 e 7 respectivamente \n");
    printf("-----------------------------------------------------------\n");
    printf("Num \ta \tb \tc\n");
    for (int c=0; c<quant; c++){
        printf("%d \t%.2lf \t%.2lf \t%.2lf\n", c, 
        media(nota1[c], nota2[c]),
        media_pond(nota1[c], nota2[c], 4, 6),
        media_pond(nota1[c], nota2[c], 3, 7));
    }
    
    return 0;
}