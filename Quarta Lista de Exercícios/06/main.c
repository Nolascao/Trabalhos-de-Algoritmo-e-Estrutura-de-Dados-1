#include <stdio.h>
#include <stdlib.h>

/*
QUARTA LISTA DE EXERC�CIOS - QUEST�O 6
AUTOR: Matheus Nolasco Miranda Soares
DATA: 24/05/2020
*/

//6)Fa�a uma fun��o que receba como par�metro de entrada o c�digo de um produto,e como par�metro de sa�da ir� disponibilizar o pre�o da mercadoria de acordo com a tabela

float produto();
int main()
{
    int cod;
    printf("Digite o codigo do produto:");
    scanf("%d",&cod);
    if (cod>99 && cod<104)
    {
        printf("O preco desse produto e R$%.2f",produto(cod));
    }
    else
    {
        printf("CODIGO INVALIDO!\n");
    }
    return 0;
}

float produto (int x)
{
    switch(x)
    {
    case 100:
        return (float) 1.20;
        break;
    case 101:
        return (float) 1.50;
        break;
    case 102:
        return (float) 2.50;
        break;
    case 103:
        return (float) 2.75;
        break;
    default:
        printf("CODIGO INVALIDO!\n");
    }
    return 0;
}
