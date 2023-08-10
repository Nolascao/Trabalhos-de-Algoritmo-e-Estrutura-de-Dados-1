#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

 /*
 ARRANJOS - EXERCÍCIO 1
 AUTOR: MATHEUS NOLASCO MIRANDA SOARES
 DATA:03/06/2020
 */
 int Fatorial(int);
int main()
{
    //1-Elaborar um programa que leia um vetor A com 15 elementos inteiros .
    //Construir um vetor B do mesmo tipo , em que cada elemento de B deva ser o resultado do fatorial correspondente de cada elemento da matriz A . Apresentar A e B.
    int i,A[15],j;
    long long int B[15];
    setlocale(LC_ALL,"portuguese");
    srand( (unsigned)time(NULL) );
    for (i=0; i<=14; i++)
    {
        A[i]=1 + ( rand() % 16 ); //Agrupa os elementos no Vetor A - OBS: O valor máximo teve que ser 16 pelo fato de que números maiores que isso eram tão grandes, que não davam certo
    }
    for (j=0; j<=14; j++)
    {
        B[j]=Fatorial(A[j]);
    }

    for (int k=0; k<=14; k++)
    {
        printf("O fatorial de %2d é %lld\n",A[k],B[k]); //Imprime os Valores
    }
    return 0;
}

 int Fatorial(int x)
 {
        int fat=1;
        for (int y=1;y<=x;y++)
        {
            fat=fat*y; //Calcula o valor do Fatorial
        }
        return fat;
 }
