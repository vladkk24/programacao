#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero,soma = 0;

    do {
        printf("Introduza um numero inteiro [1;...;10]: ");
        scanf("%i",&numero);
    } while (numero<0 || numero>10);


    switch (numero)
    {

    case 1 :
        soma = soma + numero;

    case 2 :
        soma = soma + numero;

    case 3 :
        soma = soma + numero;

    case 4 :
        soma = soma + numero;

    case 5 :
        soma = soma + numero;

    case 6 :
        soma = soma + numero;

    case 7 :
        soma = soma + numero;

    case 8 :
        soma = soma + numero;

    case 9 :
        soma = soma + numero;

    case 10 :
        soma = soma + numero;

    }
    printf("\n%i", soma);
    return 0;
}
