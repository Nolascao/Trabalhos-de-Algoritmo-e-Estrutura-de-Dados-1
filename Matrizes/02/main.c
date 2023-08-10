#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*
MATRIZES - EXERCÍCIO 2
AUTOR: MATHEUS NOLASCO MIRANDA SOARES
DATA:15/06/2020
*/

int Valores_Aleatorios ();
int main()
{
    //2) A partir do exercício acima, imprimir o maior e o menor elemento da matriz bem como a posição de cada um.
    int A[10][10],maior,menor,Posicao_maior[2],Posicao_menor[2];
    setlocale(LC_ALL,"portuguese");
    srand( (unsigned)time(NULL) );
    for (int i=0; i<10; i++)
    {
        for (int j=0; j<10; j++)
        {
            A[i][j]=Valores_Aleatorios(); // Coloca os valores aleatórios em A
        }
    }
    for (int k=0; k<10; k++)
    {
        for (int y=0; y<10; y++)
        {
            if (A[k][y]>=maior)
            {
                maior=A[k][y];  // Identifica o Maior número
            }
            else
            {
                if  (A[k][y]<=menor)
                {
                    menor=A[k][y]; // Identifica o Menor número
                }
            }
        }
    }
    for (int w=0; w<10; w++)
    {
        for (int z=0; z<10; z++)
        {
            if (A[w][z]==maior)     // Identifica as Posições do maior número
            {
                Posicao_maior[0]=w;
                Posicao_maior[1]=z;
            }
            else
            {
                if (A[w][z]==menor)   // Identifica as Posições do menor número
                {
                    Posicao_menor[0]=w;
                    Posicao_menor[1]=z;
                }
            }
        }
    }
    printf("O maior número é: Matriz[%d][%d] = %d \n O menor número é: Matriz[%d][%d] = %d ",Posicao_maior[0],Posicao_maior[1],maior,Posicao_menor[0],Posicao_menor[1],menor);

    return 0;
}

int Valores_Aleatorios ()
{
    int V;
    V=( rand() % 36 + 15 );  //Determina valores Aleatórios para o Vetor.
    return  V;
}

