#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*
MATRIZES - EXERC�CIO 5
AUTOR: MATHEUS NOLASCO MIRANDA SOARES
DATA:15/06/2020
*/

int Valores_Aleatorios ();
int main()
{
    //5) A partir do exerc�cio n�mero 1, pe�a um n�mero qualquer e verifique se o n�mero est� ou n�o na matriz.
    //Se estiver imprima a posi��o deste n�mero e se n�o estiver imprima a mensagem valor n�o encontrado.
    int A[10][10],valor,Posicao[2],Possui_ou_Nao=0;
    setlocale(LC_ALL,"portuguese");
    srand( (unsigned)time(NULL) );
    for (int i=0; i<10; i++)
    {
        for (int j=0; j<10; j++)
        {
            A[i][j]=Valores_Aleatorios(); // Coloca os valores aleat�rios em A
        }
    }
    printf("D� um valor:");
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
        printf("Este n�mero existe na matriz! Sua posi��o � Linha:%d Coluna: %d",Posicao[0],Posicao[1]);
    }
    else
    {
        printf("Este n�mero n�o existe na matriz!");
    }
    return 0;
}

int Valores_Aleatorios ()
{
    int V;
    V=( rand() % 36 + 15 );  //Determina valores Aleat�rios para o Vetor.
    return  V;
}
