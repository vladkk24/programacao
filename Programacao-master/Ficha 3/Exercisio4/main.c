#include <stdio.h>
#include <stdlib.h>

int main()
{
    char chara1, chara2;

    printf("Introduza um character\n");
    scanf("%c",&chara1);

    fflush(stdin);

    printf("Introduza outro character\n");
    scanf("%c",&chara2);

    printf("Codigo ASCII de %c e %i, o codigo ASCII %c e %i",chara1,chara1,chara2,chara2);

    return 0;
}
