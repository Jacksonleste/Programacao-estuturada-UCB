/*
    Solicite a um professor a quantidade de alunos matriculados em sua disciplina, a quantidade
    de aprovados e reprovados no final do semestre. Apresente, por meio de um sub-algoritmo
    denominado apresentaPorcentagem, as porcentagens de alunos reprovados e aprovados no
    semestre corrente. 
*/

#include <stdio.h>

void apresentaPorcentagem(int total, int aprovados);

int main(){

    int total, aprovados, reprovados;

    printf("Quantidade de alunos matriculados: ");
    scanf("%d", &total);

    printf("Quantidade de alunos aprovados: ");
    scanf("%d", &aprovados);

    apresentaPorcentagem(total, aprovados);

}

void apresentaPorcentagem(int total, int aprovados){
    int reprovados = total - aprovados;
    double porcentagemAprovados, porcentagemReprovados;

    porcentagemAprovados = (aprovados * 100) / total;

    printf("\nTotal de alunos: %d \n\nAprovados = %.2lf%%\nReprovados = %.2lf%%",total,  porcentagemAprovados, 100-porcentagemAprovados);
}