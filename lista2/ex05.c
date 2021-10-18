/* Faça um algoritmo que classifique o tamanho de uma organização populacional respeitando a
escala a seguir:
Apresente por meio de um sub-algoritmo o nome e a classificação para a cidade informada,
devendo a classificação ser obtida por um outro sub-algoritmo. As cidades deverão ser
classificadas enquanto o usuário desejar. */

#include <stdio.h>
#include <string.h>

void classifica(int habit);
void mostraInfo(char *nome, int habitantes);

int main(void){
    char nome[30];
    int habitantes, continua;
    do{
        fflush(stdin);
        printf("Nome da cidade: ");
        gets(nome);

        fflush(stdin);
        printf("Quantidade de habitantes: ");
        scanf("%d", &habitantes);
        mostraInfo(nome, habitantes);

        do{
            printf("\nQuer continuar (0=nao/1=sim): ");
            scanf("%d", &continua);
        }while(continua != 1 && continua != 0);
    }while(continua != 0);

}

void mostraInfo(char *nome, int habitantes){
    printf("%s - ",nome); 
    classifica(habitantes);
}

void classifica(int habit){
    if(habit > 1 && habit <= 5000){
        printf("vila");
    }else if(habit > 5000 && habit <= 15000){
        printf("Distrito");
    }else if(habit > 15000 && habit <=100000){
        printf("Cidade");
    }else if(habit > 100000){
        printf("Metropole");
    }
}