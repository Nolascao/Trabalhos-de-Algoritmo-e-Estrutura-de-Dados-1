#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*
MATRIZES - EXERC�CIO 3
AUTOR: MATHEUS NOLASCO MIRANDA SOARES
DATA:15/06/2020
*/

int Valores_Aleatorios ();
int main()
{
    //3) imprimir a soma dos elementos da diagonal da matriz do exerc�cio 1.
    int A[10][10],Soma=0;
    setlocale(LC_ALL,"portuguese");
    srand( (unsigned)time(NULL) );
    for (int i=0; i<10; i++)
    {
        for (int j=0; j<10; j++)
        {
            A[i][j]=Valores_Aleatorios(); // Coloca os valores aleat�rios em A
        }
    }
    for (int k=0;k<10;k++)
    {
        for(int y=0;y<10;y++)
        {
            if (k==y)
                Soma=Soma+A[k][y]; // Soma os valores da diagonal
        }
    }
    printf("A soma dos n�meros da diagonal dessa matriz � %d",Soma);
    return 0;
}


int Valores_Aleatorios ()
{
    int V;
    V=( rand() % 36 + 15 );  //Determina valores Aleat�rios para o Vetor.
    return  V;
}
