#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
QUARTA LISTA DE EXERCÍCIOS - QUESTÃO 4
AUTOR: Matheus Nolasco Miranda Soares
DATA: 24/05/2020
*/
//4) Construa um método que verifique se um ano qualquer é bissexto ou não. Projete o parâmetros de entrada (inteiro e positivo) e o valor de retorno. Teste-o a partir de main().
int bissexto(int);
int main()
{
    int ano;
    printf("De um ano:");
    scanf("%d",&ano);
    if (bissexto(ano)!=1)
    {
        if (bissexto(ano)<0)
        {
            printf("Esse ano e invalido! Ele tem que ser maior do que zero!\n");
        }
        else
        {
            printf("Esse ano nao e bissexto!\n");
        }
    }
    else
    {
        printf("Esse ano e bissexto!\n");
    }
    return 0;
}

int bissexto (int ano)
{
    int div4,div100;
    if (ano<0)
    {
        return -1;
    }
    else
    {
        div4=ano%4;
        div100=ano%100;
        if (div4==0 && div100>0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
