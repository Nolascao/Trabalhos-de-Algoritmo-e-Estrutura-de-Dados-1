#include <stdio.h>
#include <stdlib.h>
#include "MB_Ex01e02.h"
#include <math.h>

/*
QUARTA LISTA DE EXERC�CIOS - QUEST�O 3
AUTOR: Matheus Nolasco Miranda Soares
DATA: 24/05/2020
*/

//3) Fa�a um programa principal que leia um conjunto indeterminado de valores (cada valor correspondendo a um cateto de um triangulo ret�ngulo) e imprima o valor da hipotenusa. (Utilize as fun��es criadas nos exerc�cios 1 e 2) � (FLAG 0).
int main()
{
    int a=1,b=1;
    do
    {
        printf("Digite dois numeros maiores que zero - Digite 0 para parar - :\n");
        scanf("%d %d",&a,&b);
        if (Valores(a,b)==0)
        {
            printf("A hipotenusa desses catetos e: %.2f\n",Hipotenusa(a,b));
        }
    }
    while (a!=0 || b!=0);
    printf("Fim do Programa!");
    return 0;
}
