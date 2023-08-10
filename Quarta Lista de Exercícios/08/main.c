#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/*
QUARTA LISTA DE EXERCÍCIOS - QUESTÃO 8
AUTOR: Matheus Nolasco Miranda Soares
DATA: 31/05/2020
*/

//8)Construa um método que calcule e retorne o k-ésimotermo Fibonacci. Parâmetros de entrada: a posição do termo na sequência Fibonacci. Valor de retorno: o termo Fibonacci. Teste o método a partir de main().
int Fibonacci(int);

int main()
{
    int K;
    setlocale(LC_ALL,"portuguese");
    printf("Dê o termo de Fibonacci desejado:");
    scanf("%d",&K);
    printf("O número desse termo é o %d",Fibonacci(K));
    return 0;
}

int Fibonacci(int k)
{
    //Calcule o resultado da seguinte série para os N primeiros termos, o valor de N deverá ser lido pelo teclado:
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

