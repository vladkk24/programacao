#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero,suma=0,resto_da_divisao,informacao;

    do{
    printf("Introduza um numero inteiro\n");
    scanf("%i",&numero);
    }while(numero<1);


    informacao = numero;


    while (numero>0){
        resto_da_divisao = numero%10;
        suma = suma + resto_da_divisao;
        numero = numero / 10;
    }

    printf("A soma dos digitos de %i = %i",informacao, suma);

    return ;
}
