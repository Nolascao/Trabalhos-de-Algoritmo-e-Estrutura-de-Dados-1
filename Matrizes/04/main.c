#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*
MATRIZES - EXERCÍCIO 4
AUTOR: MATHEUS NOLASCO MIRANDA SOARES
DATA:15/06/2020
*/

int Valores_Aleatorios ();
int main()
{
    //4) A partir do exercício número 1, peça ao usuário a posição [i,j] da matriz , e em seguida exiba o valor que esta na matriz nesta posição. FLAG -1
    int A[10][10],Linha,Coluna;
    setlocale(LC_ALL,"portuguese");
    srand( (unsigned)time(NULL) );
    for (int i=0; i<10; i++)
    {
        for (int j=0; j<10; j++)
        {
            A[i][j]=Valores_Aleatorios(); // Coloca os valores aleatórios em A
        }
    }
    printf(" - DIGITE -1 PARA PARAR - \n");
    printf("Escolha uma posição I e J na matriz 10x10, escolha um número entre 0 e 9:\n");
    do
    {
        printf("Linha:");
        scanf("%d",&Linha);
        if (Linha>=0)
        {
            printf("Coluna:");
            scanf("%d",&Coluna);
            if (Linha>9 || Coluna>9)
            {
                printf("Número Inválido!\n");  //Caso o número da Linha ou da Coluna seja maior do que o existente
            }
            else
            {
                printf("Matriz[%d][%d] = %d\n",Linha,Coluna,A[Linha][Coluna]); //Mostra o elemento no ponto da matriz indicado
            }
        }
        else
        {
        }
    }
    while (Linha >= 0);

    return 0;
}

int Valores_Aleatorios ()
{
    int V;
    V=( rand() % 36 + 15 );  //Determina valores Aleatórios para o Vetor.
    return  V;
}
