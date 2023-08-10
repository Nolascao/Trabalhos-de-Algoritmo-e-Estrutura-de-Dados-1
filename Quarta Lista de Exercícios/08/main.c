#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/*
QUARTA LISTA DE EXERC�CIOS - QUEST�O 8
AUTOR: Matheus Nolasco Miranda Soares
DATA: 31/05/2020
*/

//8)Construa um m�todo que calcule e retorne o k-�simotermo Fibonacci. Par�metros de entrada: a posi��o do termo na sequ�ncia Fibonacci. Valor de retorno: o termo Fibonacci. Teste o m�todo a partir de main().
int Fibonacci(int);

int main()
{
    int K;
    setlocale(LC_ALL,"portuguese");
    printf("D� o termo de Fibonacci desejado:");
    scanf("%d",&K);
    printf("O n�mero desse termo � o %d",Fibonacci(K));
    return 0;
}

int Fibonacci(int k)
{
    //Calcule o resultado da seguinte s�rie para os N primeiros termos, o valor de N dever� ser lido pelo teclado:
    int termo=0,fibo=1,nacci=0,cont1;
    if (k==1)
    {
        return 1;
    }
    else
    {
        for (cont1=1; cont1<k; cont1++)
        {
            // Fazendo o Fibonacci
            termo=fibo+nacci;
            nacci=fibo;
            fibo=termo;
        }
        return termo;
    }
}

