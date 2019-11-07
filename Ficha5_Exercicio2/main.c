#include <stdio.h>
#include <stdlib.h>

int le_numero(void);
int ciclo_while(int);
int ciclo_do_while(int);
int ciclo_for(int);
char menu_opcoes(void);



int main()
{
    int valor, resultado;
    char opcao;

    valor=le_numero();
    opcao=menu_opcoes();

    switch (opcao){

    case 'W':
    case 'w':
       resultado=ciclo_while(valor);
       printf("%i",resultado);
       break;

    case 'D':
    case 'd':
        resultado=ciclo_do_while(valor);
        printf("%i",resultado);
    break;

    case 'F':
    case 'f':
        resultado=ciclo_for(valor);
        printf("%i",resultado);
        break;
    }
    return 0;
}


int le_numero(void)
{
    int numero;

    do{
      printf("Introduza um numero positivo\n");
      scanf("%i",&numero);
    }while(numero<1);

    return numero;
}


int ciclo_while(int numero)
{
    int contador = 0, total = 0;

    while (contador<=numero) {
        total = total + contador;
        contador = contador + 1;
    }

    return total;
}


int ciclo_do_while(int numero)
{
    int contador = 0, total = 0;

    do{
        total = total + contador;
        contador = contador + 1;
    }while (contador<=numero);

    return total;
}


int ciclo_for(int numero)
{
    int contador = 0, total = 0;

    for (;contador<=numero;) {
        total = total + contador;
        contador = contador + 1;
    }

    return total;
}


char menu_opcoes(void)
{
    char escolha;

    fflush(stdin);

    printf("Menu de opcoes\n");
    printf(" (W) ciclo while\n");
    printf(" (D) ciclo do...while\n");
    printf(" (F) ciclo for\n");
    printf(" (S) ciclo sair\n");
    printf("            Opcao ->");
    scanf("%c",&escolha);

    return escolha;
}
