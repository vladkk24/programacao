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
void alterar_nota_estudante(t_estudante[],int);
float percentagem_notas_positivas(t_estudante[],int);
float media_notas(t_estudante[],int);
int nota_mais_baixa(t_estudante[],int);
int nota_mais_alta(t_estudante[],int);


int main()
{
//    int notas_estudantes[MAX_NOTAS], opcao, limite;
    char resposta;
    t_estudante estudantes[120];
    int atualmente = 0;

    do {


    resposta = menu();

    switch (resposta){

    case 1:
        system("cls");
        ler_dados_estudante(estudantes, atualmente);
        atualmente ++;
        break;

    case 2:
        system("cls");
        mostrar_dados_estudantes(estudantes, atualmente);
        break;

    case 3:
        system("cls");
        alterar_nota_estudante(estudantes,atualmente);
        break;

    case 4:
        percentagem_notas_positivas(estudantes, atualmente);
        break;
    }

    }while(resposta!=0);

    return 0;
}

int menu() {
    int opcao;

    do {
        printf("|-------------------------------------------|\n");
        printf("|1 - Inserir dados dos estudantes           |\n");
        printf("|2 - Mostrar dados dos estudantes           |\n");
        printf("|3 - Alterar notas finais dos estudantes    |\n");
        printf("|4 - Percentagem de positivas               |\n");
        printf("|5 - Gravar dados em ficheiro               |\n");
        printf("|6 - Ler dados de ficheiro                  |\n");
        printf("|0 - Sair                                   |\n");
        printf("|-------------------------------------------|\n");
        printf("   OPCAO -> ");

        scanf("%d", &opcao);

        if(opcao < 0 || opcao > 6) {
            system("cls");
            printf("Opcao invalida. Tente novamente.\n\n");
        }
    } while(opcao < 0 || opcao > 6);

    return opcao;
}

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

void ler_dados_estudante(t_estudante v_estudantes[],int atualmente) {

    int contador;

    v_estudantes[atualmente].numero = ler_numero("Introduza o numero do estudante\n",2190000,2199999);
    for (contador = 0;contador <atualmente; contador++){
        if (v_estudantes[atualmente].numero == v_estudantes[contador].numero){
            do{
                printf("O numero que introduziu ja existe!\n");
                v_estudantes[atualmente].numero=ler_numero("Introduza o numero do estudante\n",2190000,2199999);
            }while(v_estudantes[atualmente].numero ==v_estudantes[contador].numero);
        }

}
    printf("Introduza o nome do estudante\n");
    fflush(stdin);
    gets(v_estudantes[atualmente].nome);
    v_estudantes[atualmente].nota_final = ler_numero("Introduza a nota do aluno\n",0,20);

}

void mostrar_dados_estudantes(t_estudante v_estudantes[], int atualmente) {

    int contador;

    printf("\n");

    for(contador = 0; contador < atualmente; contador++) {
        printf("\nNumero %i",v_estudantes[contador].numero);
        printf("\nNome %s",v_estudantes[contador].nome);
        printf("\nNota %i",v_estudantes[contador].nota_final);
        printf("\n\n");
    }
}


void alterar_nota_estudante(t_estudante v_estudantes[],int atualmente){

    int contador, desejado;

    desejado=ler_numero("Introduza o numero que pretende pesquisar\n",2190000,2199999);

    for (contador = 0;contador < atualmente; contador ++){
        if (v_estudantes[contador].numero == desejado)
            v_estudantes[contador].nota_final= ler_numero("Introduza a nota que deseja\n",0,20);
    }
}


float percentagem_notas_positivas(t_estudante v_estudantes[],int atualmente) {

    int contador;

    float resultado = 0;

    for(contador = 0; contador <atualmente; contador ++ ) {
            if (v_estudantes[contador].nota_final >9.5)
                resultado = resultado +1;
    }
    resultado = resultado / atualmente;
    resultado = resultado * 100;
    system("cls");
    printf("A percentagem de positivas na turma e de %i\n.",resultado);
}
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
