#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
QUARTA LISTA DE EXERC�CIOS - QUEST�O 2
AUTOR: Matheus Nolasco Miranda Soares
DATA: 24/05/2020
*/

//2) Escrever uma fun��o para retornar o valor da hipotenusa de um tri�ngulo ret�ngulo dado os valores dos catetos.

float hipotenusa();
int main()
{
    hipotenusa();
    return 0;
}

float hipotenusa()
{
    int cat1,cat2;
    float hip;
    printf("Valor dos catetos:\n");
    scanf("%d %d",&cat1,&cat2);
    hip=(float)sqrt(pow(cat1,2)+pow(cat2,2));
    printf("A Hipotenusa desse triangulo retangulo e: %.2f",hip);
    return hip;
}
