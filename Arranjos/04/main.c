#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <math.h>
/*
 ARRANJOS - EXERC�CIO 4
 AUTOR: MATHEUS NOLASCO MIRANDA SOARES
 DATA:03/06/2020
 */
int Valores_Aleatorios (int *);
int main()
{
    //4-Elaborar um programa que leia 10 elementos do tipo inteiro em um vetor A.
    //Crie um vetor ParImparde 2 posi��es e armazene no �ndice 0 quantos elementos de A s�o par e no �ndice 1 quantos elementos de A s�o �mpar.
    // Apresentar o vetor ParImpar. Obs.: n�o utilize o comando condicional se.
    int A[10],Par_Impar[2],Impar=0,Par=0;
    setlocale(LC_ALL,"portuguese");
    srand( (unsigned)time(NULL) );
    for (int i=0; i<=9; i++)
    {
        A[i]=Valores_Aleatorios(A); //Determina os Valores de A
    }
    printf("O vetor A �:\n");
    for (int k=0; k<=9; k++)
    {
        printf("A[%d] = %d\n",k,A[k]);  //Mostrar o Vetor A
    }
    //Verifica se os elementos s�o pares ou Impares, sem uso de IF
    for (int j=0; j<=9; j++)
    {
        switch (A[j]%2)
        {
        case 0:
            Par++;    //Caso for Par
            break;
        case 1:
            Impar++;   //Caso for Impar
            break;
        }
    }
    Par_Impar[0]=Par;
    Par_Impar[1]=Impar;
    printf("Esse vetor t�m %d n�meros Pares e %d n�meros �mpares!",Par_Impar[0],Par_Impar[1]);

    return 0;
}

int Valores_Aleatorios (int *V)
{
    *V=( rand() % 100 );  //Determina valores Aleat�rios para a Fun��o.
    return  *V;
}
