#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define numero_linhas 10
#define numero_colunas 10

void iniciar_matriz (int [] [numero_colunas]);
void mostrar_matriz(int [] [numero_colunas]);
void pesquisa_numero(int [] [numero_colunas],int);
int le_numero();


int main()
{
    int matriz[numero_linhas][numero_colunas],numero;


    iniciar_matriz(matriz);
    mostrar_matriz(matriz);
    pesquisa_numero(matriz, numero);

    return 0;
}


int le_numero()
{
    int numero;

    scanf("%i",&numero);

    return numero;
}


void iniciar_matriz(int matriz[][numero_colunas])
{
    int contador_linhas, contador_colunas;

    srand(time(NULL));
    for (contador_linhas=0; contador_linhas<10; contador_linhas++){
        for (contador_colunas=0;contador_colunas<10;contador_colunas++){

            matriz[contador_linhas][contador_colunas] = rand() % 101;
        }
    }

}


void mostrar_matriz(int matriz[][numero_colunas])
{
    int contador_linhas, contador_colunas;

    for (contador_linhas=0; contador_linhas<10; contador_linhas++){
        for (contador_colunas=0;contador_colunas<10;contador_colunas++){
            printf("%i ",matriz[contador_linhas][contador_colunas]);
        }
        printf("\n");
    }

}


void pesquisa_numero(int matriz[][numero_colunas], int numero)
{
    int contador_linhas, contador_colunas,contador = 0;

    printf("\nIntroduza um numero para pesquisar:");
    numero = le_numero();

    for (contador_linhas=0; contador_linhas<10; contador_linhas++){
        for (contador_colunas=0;contador_colunas<10;contador_colunas++){
            if (matriz [contador_linhas][contador_colunas] == numero){
                printf("\nLinha:%i Coluna:%i | Foi encontrado o numero %i",contador_linhas+1, contador_colunas+1, numero);
                contador = contador +1;
                }
        }
    }
    if (contador == 0)
        printf("\nNao foi encontrado nenhuma valor igual ao %i",numero);
}
