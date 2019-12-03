#include <stdio.h>
#include <stdlib.h>
#define tamanho 20

void pedido_da_string(char []);
void vogais(char []);
void invertida(char []);
void sem_espacos(char []);

int main()
{
    int numero;
    char mensagem[tamanho];

    pedido_da_string(mensagem);
    vogais(mensagem);
    invertida(mensagem);
    printf("\n");
    sem_espacos(mensagem);
    return 0;
}


void pedido_da_string(char mensagem[])
{
    printf("Introduza uma string a sua escolha.\n");
    fflush(stdin);
    gets(mensagem);
}


void vogais(char mensagem[])
{
    int contador, vogais = 0;

    for (contador=0;contador<tamanho;contador++)
    {
        if (mensagem[contador] == 'a' || mensagem[contador] == 'e' || mensagem[contador] == 'i' || mensagem[contador] == 'o' ||mensagem[contador] == 'u')
            vogais = vogais +1;
    }
    printf("A sua string tem %i vogais\n", vogais);
}



void invertida(char mensagem[])
 {
     int contador;

     for(contador = (strlen(mensagem)-1);contador >= 0; contador--)
     {
         printf("%c",mensagem[contador]);
     }
 }



void sem_espacos(char mensagem[])
{
    int contador;

     for(contador = 0; contador<(strlen(mensagem));contador++)
     {
         if (mensagem[contador] != ' ')
            printf("%c",mensagem[contador]);
     }
}
