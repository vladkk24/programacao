#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int le_numero(void);
int soma(int,int);
int subtracao(int,int);
float raiz_quadrada(int);
float potencia(int,int);
char menu(void);

int main()
{
    int valor1, valor2, total;
    float total_float;
    char opcao;

    valor1 = le_numero();

    valor2 = le_numero();

    do{
    opcao = menu();
    }while (opcao !='S' && opcao != 's' && opcao != 'R' && opcao != 'P');

    switch (opcao){

    case 'S':
    total = soma(valor1, valor2);
    printf("Soma = %i\n", total);
    break;

    case 's':
    total = subtracao(valor1, valor2);
    printf("Subtracao = %i\n",total);
    break;

    case 'R':
    total_float = raiz_quadrada(valor1);
    printf("Raiz quadrada = %.2f\n",total_float);

    total_float = raiz_quadrada(valor2);
    printf("Raiz quadrada = %.2f\n",total_float);
    break;

    case 'P':
    total_float = potencia(valor1, valor2);
    printf("Potencia do numero = %.2f\n",total_float);

    total_float = potencia(valor2, valor1);
    printf("Potencia do numero = %.2f\n",total_float);
    break;
    }
    return 0;
}


int le_numero(void)
{
    int numero;

    printf("Introduza um numero \n");
    scanf("%i",&numero);

    return numero;
}


int soma(int valor1,int valor2 )
{
    int resultado;

    resultado = valor1 + valor2;

    return resultado;
}


int subtracao(int valor1, int valor2)
{
    int resultado;

    resultado = valor1 - valor2;

    return resultado;
}


float raiz_quadrada(int valor1)
{
    float resultado;

    resultado = sqrt(valor1);

    return resultado;
}


float potencia(int valor1, int valor2 )
{
    float resultado;

    resultado = pow(valor1,valor2);

    return resultado;
}


char menu()
{
    char escolha;

    fflush(stdin);

    printf("Menu de opcoes\n");
    printf(" (S) Soma\n");
    printf(" (s) subtracao\n");
    printf(" (R) Raiz Quadrada\n");
    printf(" (P) Potencia\n");
    printf("Nota, atencao a letra maiuscula e minuscula\n");
    printf("            Opcao ->");

    scanf("%c",&escolha);

    return escolha;
}
