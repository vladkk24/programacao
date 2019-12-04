#include <stdio.h>
#include <stdlib.h>
#define MAX_NOTAS 120

typedef struct {
    int numero;
    char nome[50];
    int nota_final;
}t_estudante;

//int menu();
int ler_numero(char*, int, int);
//void calcular_media_notas(int[], int);
//void calcular_nota_mais_alta(int[], int);
//void calcular_nota_mais_baixa(int[], int);
//void mostrar_notas_positivas(int[], int);
//void mostrar_notas_negativas(int[], int);
void ler_dados_estudante(t_estudante[],int);
void mostrar_dados_estudantes(t_estudante[],int);

int main()
{
//    int notas_estudantes[MAX_NOTAS], opcao, limite;
    t_estudante estudantes[120];
    int atualmente = 0;

    ler_dados_estudante(estudantes, atualmente);
    atualmente ++;
    ler_dados_estudante(estudantes, atualmente);
    atualmente ++;
    mostrar_dados_estudantes(estudantes, atualmente);

    return 0;
}

//int menu() {
//    int opcao;
//
//    do {
//        printf("------------- Media de notas -------------\n\n");
//        printf("1 - Registar notas dos estudantes\n");
//        printf("2 - Mostrar notas\n");
//        printf("3 - Mostrar media das notas\n");
//        printf("4 - Mostrar notas positivas\n");
//        printf("5 - Mostrar notas negativas\n");
//        printf("6 - Mostrar nota mais alta e nota mais baixa\n");
//        printf("0 - Sair\n\n");
//        printf("   OPCAO -> ");
//        scanf("%d", &opcao);
//
//        if(opcao < 0 || opcao > 6) {
//            system("cls");
//            printf("Opcao invalida. Tente novamente.\n\n");
//        }
//    } while(opcao < 0 || opcao > 6);
//
//    return opcao;
//}
//
int ler_numero(char* mensagem, int limite_inferior, int limite_superior) {
    int numero;

    do {
        printf("%s", mensagem);
        scanf("%d", &numero);

        if(numero < limite_inferior) {
            printf("O numero nao pode ser abaixo de %d.\n", limite_inferior);
        }
        else if(numero > limite_superior) {
            printf("O numero nao pode ultrapassar %d.\n", limite_superior);
        }
    } while(numero < limite_inferior || numero > limite_superior);

    return numero;
}

void ler_dados_estudante(t_estudante estudantes[],int atualmente) {

    estudantes[atualmente].numero = ler_numero("Introduza o numero do estudante\n",2190000,2199999);
    printf("Introduza o nome do estudante\n");
    fflush(stdin);
    gets(estudantes[atualmente].nome);
    estudantes[atualmente].nota_final = ler_numero("Introduza a nota do aluno\n",0,20);

}

void mostrar_dados_estudantes(t_estudante estudantes[], int atualmente) {

    int contador;

    printf("\n");

    for(contador = 0; contador < atualmente; contador++) {
        printf("\nNumero %i",estudantes[contador].numero);
        printf("\nNome %s",estudantes[contador].nome);
        printf("\nNota %i",estudantes[contador].nota_final);
        printf("\n");
    }
}

//void calcular_media_notas(int notas_estudantes[], int limite) {
//    int i, soma = 0;
//    float resultado;
//
//    for(i = 0; i < limite; i++) {
//        soma += notas_estudantes[i];
//    }
//
//    resultado = (float) soma / limite;
//
//    system("cls");
//    printf("\nMedia das %d notas: %.2f\n", limite, resultado);
//    printf("\nPrima qualquer tecla para continuar.");
//    fflush(stdin);
//    getch();
//}
//
//void calcular_nota_mais_alta(int notas_estudantes[], int limite) {
//    int i, nota_mais_alta = 0;
//
//    for(i = 0; i < limite; i++) {
//        if(notas_estudantes[i] > nota_mais_alta) {
//            nota_mais_alta = notas_estudantes[i];
//        }
//    }
//
//    system("cls");
//    printf("\nNota mais alta: %d\n", nota_mais_alta);
//    printf("\nPrima qualquer tecla para continuar.");
//    fflush(stdin);
//    getch();
//}
//
//void calcular_nota_mais_baixa(int notas_estudantes[], int limite) {
//    int i, nota_mais_baixa = 20;
//
//    for(i = 0; i < limite; i++) {
//        if(notas_estudantes[i] < nota_mais_baixa) {
//            nota_mais_baixa = notas_estudantes[i];
//        }
//    }
//
//    system("cls");
//    printf("\nNota mais baixa: %d\n", nota_mais_baixa);
//    printf("\nPrima qualquer tecla para continuar.");
//    fflush(stdin);
//    getch();
//}
//
//void mostrar_notas_positivas(int notas_estudantes[], int limite) {
//    int i, nota_positiva = 0;
//
//    system("cls");
//    printf("\nNotas positivas:\n\n");
//
//    for(i = 0; i < limite; i++) {
//        if(notas_estudantes[i] >= 10) {
//            printf("Nota %d: %d\n", i+1, notas_estudantes[i]);
//        }
//    }
//
//    printf("\nPrima qualquer tecla para continuar.");
//    fflush(stdin);
//    getch();
//}
//
//void mostrar_notas_negativas(int notas_estudantes[], int limite) {
//    int i, nota_negativa = 0;
//
//    system("cls");
//    printf("\nNotas negativas:\n\n");
//
//    for(i = 0; i < limite; i++) {
//        if(notas_estudantes[i] < 10) {
//            printf("Nota %d: %d\n", i+1, notas_estudantes[i]);
//        }
//    }
//
//    printf("\nPrima qualquer tecla para continuar.");
//    fflush(stdin);
//    getch();
//}
