#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 /*
QUARTA LISTA DE EXERCÍCIOS - QUESTÃO 5
AUTOR: Matheus Nolasco Miranda Soares
DATA: 24/05/2020
*/

//5) Fazer um algoritmo para :
//- definir uma função para determinar se um número inteiro é divisível por outro;
//- ler um número indeterminado de pares de dados inteiros;
//- o último par de dados será igual a (zero, zero) e não deverá ser considerado;
//- usando a função, mostrar que pares lidos têm o primeiro valor divisível pelo segundo.

int divisivel(int,int);
int main()
{
    int a=1,b=1;
    do
    {
        printf("Digite dois numeros: - Digite 0 e 0 para parar - :\n");
        scanf("%d %d",&a,&b);
        if(divisivel(a,b)<0)
        {
            printf("%d e divisivel por %d\n",a,b);
        }
        else
        {
            printf("%d nao e divisivel por %d\n",a,b);
        }
    }
    while (a!=0 && b!=0);
    printf("Fim do Programa!");
    return 0;
}

int divisivel(int x,int y)
{
    if ((x%y)==0)
    {
        // Eles são divisíveis
        return -1;
    }
    else
    {
        //Eles não são divisíveis
        return 1;
    }
}

