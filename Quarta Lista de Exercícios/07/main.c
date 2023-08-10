#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
QUARTA LISTA DE EXERCÍCIOS - QUESTÃO 7
AUTOR: Matheus Nolasco Miranda Soares
DATA: 31/05/2020
*/

//7-)Faça um programa que utilize a função do exercício anterior.Este programa irá pedir ao usuário vários códigos e quantidades dos produtos.
//Para cada par de valores deverá chamar a função para obter o preço da mercadoria e devolver ao usuário o valor total – ao final de todos os códigos(flag código = 0)
//o programa deverá mostrar o valor total da compra . Obs: caso o código não exista na tabela deverá mostrar uma mensagem de erro e pedir novo código.


float valor_produto(int,int);
int main()
{
    int codigo=1,quantidade=0;
    float valor_final=0;
    setlocale(LC_ALL,"portuguese");
    printf(" - DIGITE 0 PARA PARAR -\n");
    do
    {
        printf("Digite o Código do produto:");
        scanf("%d",&codigo);
        printf("Digite a quantidade do produto:");
        scanf("%d",&quantidade);
        if (codigo ==0 )
        {
        }
        else
        {
            if (codigo>99 && codigo<104)
            {
                valor_final=valor_final+valor_produto(codigo,quantidade);
            }
            else
            {
                printf("\nERRO: Código Inválido - Digite um número entre 100 e 103\n");
            }
        }

    }
    while (codigo != 0);
    printf("\nO valor final foi de R$%.2f",valor_final);
    return 0;
}


float valor_produto (int produto,int quant)
{
    if (produto == 100)
    {
        return (float) quant*1.20;
    }
    else
    {
        if (produto==101)
        {
            return (float) quant*1.50;
        }
        else
        {
            if (produto==102)
            {
                return (float) quant*2.50;
            }
            else
            {
                if (produto ==103)
                {
                    return (float) quant*2.75;
                }
                else
                {
                    return 0;
                }
            }
        }
    }


}
