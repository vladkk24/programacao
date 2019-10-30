#include <stdio.h>
#include <stdlib.h>


int main()
{
    int linha,coluna,TAM;

    printf("Introduza o tamanho desejado\n");
    scanf("%i",&TAM);

    if (TAM<=0)
        printf("O valor que introduziu e invalido\n");
    else{

        for (linha = 1;linha <=TAM;linha++){
            for (coluna = 1; coluna<=TAM ; coluna++)
                if (coluna ==1 || coluna == TAM || coluna ==linha )
                    printf("*");
            else printf(" ");
            printf("\n");
            }
    }
getchar();

    return 0;
}
