/*
    Elabore dois sub-algoritmos, além do algoritmo principal, um que calcule duas operações
    aritméticas consecutivas sobre três valores inteiros e dois operadores, lidos no algoritmo
    principal e outro que verifique se o resultado final das operações produzirá um número par ou
    ímpar. Os resultados devem ser apresentados no algoritmo principal Exemplo (5 + 3 * 2 = ?) 
*/

#include <stdio.h>
#include <string.h>

int calcula(int num1, char operador1, int num2, char operador2, int num3);

int main(){
    int num1, num2, num3;
    char operador1, operador2;

    printf("Insira um numero inteiro: ");
    scanf("%d", &num1);

    printf("Insira um operador aritimetico: ");
    fflush(stdin);
    operador1 = getchar();

    printf("Insira um numero inteiro: ");
    scanf("%d", &num2);

    printf("Insira um operador aritimetico: ");
    fflush(stdin);
    operador2 = getchar();

    printf("Insira um numero inteiro: ");
    scanf("%d", &num3);

    calcula(num1, operador1, num2, operador2, num3);


    return 0;
}

int calcula(int num1, char operador1, int num2, char operador2, int num3){
    int res1, resFinal;
    if(operador1 == '*' || operador1 == '/'){
        switch (operador1){
            case '*':
                res1 = num1 * num2;
                break;
                
            case '/':
                res1 = num1 / num2;
                break;
        }
        if(operador2 == '+'){
            resFinal = res1 + num3;
        }else if(operador2 == '-'){
            resFinal = res1 - num3;
        }else if(operador2 == '/'){
            resFinal = res1 / num3;
        }else if(operador2 == '*'){
            resFinal = res1 * num3;
        }
    }else if(operador2 == '*' || operador2 == '/'){
        switch (operador2){
            case '*':
                res1 = num2 * num3;
                break;
                
            case '/':
                res1 = num2 / num3;
                break;
        }
        if(operador1 == '+'){
            resFinal = num1 + res1;
        }else if(operador1 == '-'){
            resFinal = num1 - res1;
        }else if(operador1 == '/'){
            resFinal = num1 / res1;
        }else if(operador1 == '*'){
            resFinal = num1 * res1;
        }
    }else{

    }




    printf("%d %c %d %c %d = %d", num1, operador1, num2, operador2, num3, resFinal);
}
