#include <stdio.h>
#include <stdlib.h>
float le_numero(void);
float area_triangulo(float,float);
float area_retangulo(float,float);
float area_quadrado(float);
float area_circulo(float);
char menu(int,int,int,int);
char saida(void);

#define pi 3.14;

int main()
{
    char resposta;
    float resultado, lado1, lado2;
    int contador1=0,contador2=0,contador3=0,contador4=0;

    do{
    resposta = menu(contador1,contador2,contador3,contador4);

    switch (resposta){

    case 'T':
        lado1 = le_numero();
        lado2 = le_numero();

       resultado = area_triangulo(lado1, lado2);

       printf("Area do triangulo %f\n\n",resultado);

       contador1 = contador1 + 1;
       break;

    case 'R':
        lado1 = le_numero();
        lado2 = le_numero();

       resultado = area_retangulo(lado1, lado2);

       printf("Area do Retangulo %f\n\n",resultado);

       contador2 = contador2 +1;
    break;

    case 'Q':
        lado1 = le_numero();

       resultado = area_quadrado(lado1);

       printf("Area do Quadrado %f\n\n",resultado);

       contador4 = contador4 +1;
       break;

    case 'C':
        lado1 = le_numero();

       resultado = area_circulo(lado1);

       printf("Area do Circulo %f\n\n",resultado);

       contador3 = contador3 +1;
    break;

    case 'F':
        resposta = saida();

    break;
    }
    }while (resposta!='S');





    return 0;
}


float le_numero()
{
    float numero;

    printf("Introduza o valor \n");
    scanf("%f",&numero);

    return numero;
}


float area_quadrado(float lado1)
{
    float resultado;

    resultado=lado1*lado1;

    return resultado;
}


float area_retangulo(float lado1,float lado2)
{
float resultado;

    resultado = lado1 * lado2;

    return resultado;
}


char menu(int contador1, int contador2, int contador3, int contador4)
{
    char escolha;

    fflush(stdin);

    printf("                      Calculo de areas\n");
    printf("Triangulo: %i                                     Retangulo: %i\n",contador1,contador2);
    printf("Circulo:   %i                                     Quadrado : %i\n",contador3,contador4);
    printf("\n");
    printf("OPCOES\n");
    printf("(T)riangulo\n");
    printf("(R)etangulo\n");
    printf("(Q)uadrado\n");
    printf("(F)im\n");
    printf("Selecione opcao: ");
    scanf("%c",&escolha);

    return escolha;
}


float area_triangulo(float lado1,float lado2)
{
    float resultado;

    resultado = (lado1 * lado2)/2;

    return resultado;
}


float area_circulo(float lado1)
{
    float resultado;

    resultado = (lado1 * lado1) / pi;

    return resultado;
}


char saida()
{
    char resposta;
    printf("Deseja mesmo sair?\n (S)");
    scanf("%c",&resposta);

    return resposta;
}
