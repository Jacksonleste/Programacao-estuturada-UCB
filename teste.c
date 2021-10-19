#include <stdio.h>

int main(){

    int a, c;
    int * ba;
    c=10;

    printf("Digite o valor a: ");
    scanf("%d", &a);

    ba = &a;

    printf("Valor de a: %d\n", a);
    printf("Endereco de a: %d\n", &a);
    printf("Valor de ba: %d\n", ba);
    printf("Endereco de ba: %d\n", &ba);



    return 0;
}