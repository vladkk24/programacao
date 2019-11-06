#include <stdio.h>
#include <stdlib.h>

void funcao1(void);
void funcao2(void);

int main()
{
    printf("Inicio da funcao principal - main\n");

    funcao1();

    printf("Estou entre as chamadas das funcoes 1 e 2\n");

    funcao2();

    printf("Fim da funcao main");

    return 0;
}


void funcao1(void)
{
    printf("Estou na funcao 1\n");
}


void funcao2(void)
{
    printf("Estou na funcao 2\n");
}
