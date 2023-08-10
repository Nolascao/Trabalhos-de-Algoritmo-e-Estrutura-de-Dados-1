#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*
ARRANJOS - EXERCÍCIO 3
AUTOR: MATHEUS NOLASCO MIRANDA SOARES
DATA:03/06/2020
*/

float Valores_Aleatorios (float *);
int main()
{
    //3 -Elaborar um programa que leia 20 elementos do tipo real em um vetor A, em seguida crie um procedimento que inverta os elementos armazenados.
    //Ou seja, o primeiro elemento de A passará a ser o ultimo, o segundo elemento passará a ser o penúltimo e assim por diante. Apresentar A.
    float A[20];
    int Auxiliar=0,j;
    setlocale(LC_ALL,"portuguese");
    srand( (unsigned)time(NULL) );
    for (int i=0; i<=19; i++)
    {
        A[i]=Valores_Aleatorios(A); //Determina os Valores de A
    }
    printf("O vetor A era:\n");
    for (int k=0; k<=19; k++)
    {
        printf("A[%d] = %.1f\n",k,A[k]);  //A antes
    }
    //Inverte a posição dos elementos da Função
    for (j=0; j<=10; j++)
    {
        Auxiliar=A[19-j];
        A[19-j]=A[j];
        A[j]=Auxiliar;
    }
    printf("\nO vetor A ficou:\n");
    for (int y=0; y<=19; y++)
    {
        printf("A[%d] = %.1f\n",y,A[y]);  //A depois
    }

    return 0;
}

float Valores_Aleatorios (float *V)
{
    *V=( rand() % 100 );  //Determina valores Aleatórios para a Função.
    return (float) *V;
}



