#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 /*
QUARTA LISTA DE EXERC�CIOS - QUEST�O 5
AUTOR: Matheus Nolasco Miranda Soares
DATA: 24/05/2020
*/

//5) Fazer um algoritmo para :
//- definir uma fun��o para determinar se um n�mero inteiro � divis�vel por outro;
//- ler um n�mero indeterminado de pares de dados inteiros;
//- o �ltimo par de dados ser� igual a (zero, zero) e n�o dever� ser considerado;
//- usando a fun��o, mostrar que pares lidos t�m o primeiro valor divis�vel pelo segundo.

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
        // Eles s�o divis�veis
        return -1;
    }
    else
    {
        //Eles n�o s�o divis�veis
        return 1;
    }
}

