#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero_aleatorio,guess,contador;

        srand(time(NULL));
        numero_aleatorio= rand() % 5;

        contador = 0;
    do{

        printf("Introduza um numero\n");
        scanf("%i",&guess);

         if (guess==numero_aleatorio)
            printf("Parabens acertou!!\n");


         if (guess>numero_aleatorio)
            printf("Esta acima do numero pretendido\n");

         if (guess<numero_aleatorio)
            printf("Esta abaixo do numero pretendido\n");

         contador = contador + 1;
    }while (contador<5 && guess!=numero_aleatorio);


    return 0;
}
