#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*
MATRIZES - EXERC�CIO 1
AUTOR: MATHEUS NOLASCO MIRANDA SOARES
DATA:12/06/2020
*/

int Valores_Aleatorios ();
int main()
{
    //1) Preencher uma matriz de 10 x 10 posi��es com valores aleat�rios de 15 a 50
    //(utilize para cada n�mero a fun��o rand � fa�a uma fun��o que dados os valores inicial e final devolva um n�mero aleat�rio dentro deste intervalo)
    //Em seguida imprima os �ndices (i,j) da matriz e o valor correspondente, na forma de matriz.
    int A[10][10];
    setlocale(LC_ALL,"portuguese");
    srand( (unsigned)time(NULL) );
    for (int i=0; i<10; i++)
    {
        for (int j=0; j<10; j++)
        {
            A[i][j]=Valores_Aleatorios(); // Coloca os valores aleat�rios em A
        }
    }

    for (int k=0; k<10; k++)
    {
        for (int y=0; y<10; y++)
        {
            printf("Matriz[%d][%d] = %d ",k,y,A[k][y]);
        }
        printf("\n");
    }

    return 0;
}

int Valores_Aleatorios ()
{
    int V;
    V=( rand() % 36 + 15 );  //Determina valores Aleat�rios para o Vetor.
    return  V;
}
