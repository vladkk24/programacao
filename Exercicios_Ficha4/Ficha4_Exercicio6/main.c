#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero,total, contador, adicional;

    printf("Introduza um numero inteiro\n");
    scanf("%f",&numero);

    adicional = numero;

    while (adicional != 0 ){
        contador = adicional%10;
        total = total + contador;
        adicional = adicional / 10;
    }
    printf("\n    %d = %d",numero, total);
    return 0;
}
