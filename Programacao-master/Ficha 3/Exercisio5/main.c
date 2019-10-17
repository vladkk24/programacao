#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1, numero2, total;
    char operacao, vezes, divisor;

    printf("Introduza dois numeros inteiros e a operação aritmetica a realizar\n");
    printf("\nnumero 1 : ");
    scanf("%i",&numero1);
    printf("\nnumero 2 : ");
    scanf("%i",&numero2);

    fflush(stdin);

    printf("\nOperacao aritmetica : ");
    scanf("%c",&operacao);

    switch (operacao) {

    case '*':
        total = numero1 * numero2;
        break;


    case 47 || 58 :
        total = numero1 / numero2;


    }

    return 0;
}
