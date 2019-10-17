#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1, numero2, total;
    char operacao, vezes, divisor;

    printf("Introduza dois numeros inteiros e a opera��o aritmetica a realizar\n");
    printf("\nnumero 1 : ");
    scanf("%i",&numero1);
    printf("\nnumero 2 : ");
    scanf("%i",&numero2);

    fflush(stdin);

    printf("\nOperacao aritmetica : ");
    scanf("%c",&operacao);


    switch (operacao) {

    case 'x':
    case '*':
        total = numero1 * numero2;
        printf("\nResultado: %i",total);
        break;

    case ':' :
    case '/' :
        if (numero2 == 0)
            printf("Erro - Divisão por zero");
        else {
            total = numero1 / numero2;
            printf("\n Resultado: %i",total);
        }
        break;

    case '+' :
        total = numero1 + numero2;
        printf("\n Resultado: %i",total);
        break;

    case '-' :
        total = numero1 - numero2;
        printf("\n Resultado: %i",total);
        break;

    case '%' :
        total = numero1 % numero2;
        printf("\n Resultado: %i",total);
        break;

    default:
        printf("\nNumerador invalido");
        break;
    }

    return 0;
}
