#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*
ARRANJOS - EXERCÍCIO 4
AUTOR: MATHEUS NOLASCO MIRANDA SOARES
DATA:03/06/2020
*/

int Valores_Aleatorios (int *);
int main()
{
    //5 -Elaborar um programa que leia 10 elementos do tipo inteiro em um vetor A. Ordene e imprima o vetor A.
    int A[10],Auxiliar;
    setlocale(LC_ALL,"portuguese");
    srand( (unsigned)time(NULL) );
    for (int i=0; i<=9; i++)
    {
        A[i]=Valores_Aleatorios(A); //Determina os Valores de A
    }
    printf("O vetor A é:\n");
    for (int y=0; y<=9; y++)
    {
        printf("A[%d] = %d\n",y,A[y]);  //Mostrar o Vetor A antes de ser ordenado
    }
    //Ordena o Vetor A
    for (int j=0; j<=9; j++)
    {
        for (int k=0; k<=9; k++)
        {
            if (A[j]<A[k])
            {
                Auxiliar=A[j];
                A[j]=A[k];
                A[k]=Auxiliar;
            }
        }
    }
    printf("O vetor A ordenado:\n");
    for (int z=0; z<=9; z++)
    {
        printf("A[%d] = %d\n",z,A[z]);  //Mostrar o Vetor A depois de ser ordenado
    }
    return 0;
}

int Valores_Aleatorios (int *V)
{
    *V=( rand() % 100 );  //Determina valores Aleatórios para o Vetor.
    return  *V;
}
