#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor,maior,menor,total,contador;


    total = 0;
    contador = 0;
    menor = 300;

    do{
        do {
            printf("Introduza o comprimento do salto\n");
            scanf("%f",&valor);
        }while (valor<0);

        if (valor>0) {
        if (valor>maior)
        maior = valor;
        if (valor<menor && valor !=0)
        menor = valor;
        contador = contador + 1;

        total = total + valor;
        }
    }while (valor!=0);

    if (contador == 0)
        printf("Nao foi introduzido qualquer comprimento");

    else{
    total = total / contador;

    printf("\nO numero de atletas : %.0f",contador);
    printf("\nO maior salto foi de : %.2f",maior);
    printf("\nO menor salto foi de : %.2f",menor);
    printf("\nA media dos saltos foi de : %.2f",total);
    }

    return 0;
}
