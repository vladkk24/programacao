#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero,suma=0,adicional,informacao;

    printf("Introduza um numero positivo\n");
    scanf("%i",&numero);

    informacao = numero;
    while (numero>0) {
        adicional = numero%10;
        suma = suma + adicional;
        numero = numero / 10;
    }

    printf("A soma total dos digitos de %i = %i",informacao, suma);

    return 0;
}
