#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

 /*
 ARRANJOS - EXERCÍCIO 2
 AUTOR: MATHEUS NOLASCO MIRANDA SOARES
 DATA:03/06/2020
 */

int Valores_Aleatorios(int *);
int main()
{
    //2 -Construir um programa que leia dois vetores A e B com 10 elementos quaisquer inteiros.
    //Construir um vetor C, sendo este o resultado da união dos elementos de A e B –sem repetição. Apresentar C.
    int A[10],B[10],tamanho=0,partindo_de=0,auxiliar=0;
    setlocale(LC_ALL,"portuguese");
    srand( (unsigned)time(NULL) );
    for (int i=0; i<10; i++)
    {
        A[i]=Valores_Aleatorios(A); //Agrupa os elementos no Vetor A
    }
    for (int i=0; i<10; i++)
    {
        B[i]=Valores_Aleatorios(B); //Agrupa os elementos no Vetor B
    }
    //Acha o tamanho do Vetor C
    for (int j=0; j<=10;j++)
    {
        for (int q=0;q<=10;q++)
        {
            if (A[j]==B[q])
            {
                tamanho++;
            }
            else
            {
            }
        }
    }
    tamanho=10+(10-tamanho);
    int C[tamanho];
    //Copia os elementos de A em C
    for (int k=0;k<=tamanho;k++)
    {
      C[k]=A[k];
    }
    //Compara C com B, os elementos que forem repetidos viram -232
    for (int k=0;k<=tamanho;k++)
    {
         for (int m=0;m<=10;m++)
        {
            if (C[k]==B[m])
            {
                B[m]=0;
                auxiliar++;
            }
        }
    }
    partindo_de=10-auxiliar;
    //Compara novamente C com B, adicionando os elementos que não se repetem
    for (int k=0;k<=tamanho;k++)
    {
         if (B[k]!=0)
         {
             C[tamanho-partindo_de]=B[k];
             partindo_de--;
         }
    }
    printf("Vetor C:\n");
    for (int i=0;i<=tamanho;i++)
    {
       printf("C[%d] = %d\n",i,C[i]);
    }
    return 0;
}

int Valores_Aleatorios (int *V)
{
    *V=( rand() % 101 );
    return *V;
}

