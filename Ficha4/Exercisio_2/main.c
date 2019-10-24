#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, contador,total;
    char escolha;

    contador = 1;
    total = 0;

    do {
    system("cls");
    printf("\nMENU DE OPCOES");
    printf("\n(W)hile");
    printf("\n(D)o while");
    printf("\n(F)or\n");
    scanf("%c", &escolha);

    }while (escolha!='W' && escolha!='w' && escolha!='D' && escolha!='d' & escolha!='F' && escolha!='f' );

    do{
    printf("Introduza um numero inteiro\n");
    scanf("%i",&numero);
    }while (numero<0);

    switch (escolha){

    case 'W':
    case 'w':
    while (contador<=numero) {
        total = total + contador;
        contador = contador + 1;
    }
    printf("Soma dos numeros de 1 ate %i : %i",numero, total);
    break;

    case 'D':
    case 'd':
        do {
            total = total + contador;
            contador = contador + 1;
        }while (contador<=numero);
        printf("Soma dos numeros de 1 ate %i : %i",numero, total);
        break;

    case 'F':
    case 'f':
        for (;contador<=numero;) {
            total = total + contador;
            contador = contador + 1;
        }
        printf("Soma dos numeros de 1 ate %i : %i",numero, total);
        break;
    }

    return 0;
}
