#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <math.h>
/*
 ARRANJOS - EXERCÍCIO 4
 AUTOR: MATHEUS NOLASCO MIRANDA SOARES
 DATA:03/06/2020
 */
int Valores_Aleatorios (int *);
int main()
{
    //4-Elaborar um programa que leia 10 elementos do tipo inteiro em um vetor A.
    //Crie um vetor ParImparde 2 posições e armazene no índice 0 quantos elementos de A são par e no índice 1 quantos elementos de A são ímpar.
    // Apresentar o vetor ParImpar. Obs.: não utilize o comando condicional se.
    int A[10],Par_Impar[2],Impar=0,Par=0;
    setlocale(LC_ALL,"portuguese");
    srand( (unsigned)time(NULL) );
    for (int i=0; i<=9; i++)
    {
        A[i]=Valores_Aleatorios(A); //Determina os Valores de A
    }
    printf("O vetor A é:\n");
    for (int k=0; k<=9; k++)
    {
        printf("A[%d] = %d\n",k,A[k]);  //Mostrar o Vetor A
    }
    //Verifica se os elementos são pares ou Impares, sem uso de IF
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
    printf("Esse vetor têm %d números Pares e %d números ímpares!",Par_Impar[0],Par_Impar[1]);

    return 0;
}

int Valores_Aleatorios (int *V)
{
    *V=( rand() % 100 );  //Determina valores Aleatórios para a Função.
    return  *V;
}
