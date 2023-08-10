#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*
MATRIZES - EXERC�CIO 4
AUTOR: MATHEUS NOLASCO MIRANDA SOARES
DATA:15/06/2020
*/

int Valores_Aleatorios ();
int main()
{
    //4) A partir do exerc�cio n�mero 1, pe�a ao usu�rio a posi��o [i,j] da matriz , e em seguida exiba o valor que esta na matriz nesta posi��o. FLAG -1
    int A[10][10],Linha,Coluna;
    setlocale(LC_ALL,"portuguese");
    srand( (unsigned)time(NULL) );
    for (int i=0; i<10; i++)
    {
        for (int j=0; j<10; j++)
        {
            A[i][j]=Valores_Aleatorios(); // Coloca os valores aleat�rios em A
        }
    }
    printf(" - DIGITE -1 PARA PARAR - \n");
    printf("Escolha uma posi��o I e J na matriz 10x10, escolha um n�mero entre 0 e 9:\n");
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
                printf("N�mero Inv�lido!\n");  //Caso o n�mero da Linha ou da Coluna seja maior do que o existente
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
    V=( rand() % 36 + 15 );  //Determina valores Aleat�rios para o Vetor.
    return  V;
}
