#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*
MATRIZES - EXERCÍCIO 5
AUTOR: MATHEUS NOLASCO MIRANDA SOARES
DATA:15/06/2020
*/

int Valores_Aleatorios ();
int main()
{
    //5) A partir do exercício número 1, peça um número qualquer e verifique se o número está ou não na matriz.
    //Se estiver imprima a posição deste número e se não estiver imprima a mensagem valor não encontrado.
    int A[10][10],valor,Posicao[2],Possui_ou_Nao=0;
    setlocale(LC_ALL,"portuguese");
    srand( (unsigned)time(NULL) );
    for (int i=0; i<10; i++)
    {
        for (int j=0; j<10; j++)
        {
            A[i][j]=Valores_Aleatorios(); // Coloca os valores aleatórios em A
        }
    }
    printf("Dê um valor:");
    scanf("%d",&valor);
    for (int k=0; k<10; k++)
    {
        for(int y=0; y<10; y++)
        {
            if (valor==A[k][y])
            {
                Possui_ou_Nao=1;
                Posicao[0]=k;
                Posicao[1]=y;
            }
        }
    }
    if (Possui_ou_Nao==1)
    {
        printf("Este número existe na matriz! Sua posição é Linha:%d Coluna: %d",Posicao[0],Posicao[1]);
    }
    else
    {
        printf("Este número não existe na matriz!");
    }
    return 0;
}

int Valores_Aleatorios ()
{
    int V;
    V=( rand() % 36 + 15 );  //Determina valores Aleatórios para o Vetor.
    return  V;
}
