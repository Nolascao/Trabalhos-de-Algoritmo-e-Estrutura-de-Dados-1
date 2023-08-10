#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
QUARTA LISTA DE EXERC�CIOS - QUEST�O 7
AUTOR: Matheus Nolasco Miranda Soares
DATA: 31/05/2020
*/

//7-)Fa�a um programa que utilize a fun��o do exerc�cio anterior.Este programa ir� pedir ao usu�rio v�rios c�digos e quantidades dos produtos.
//Para cada par de valores dever� chamar a fun��o para obter o pre�o da mercadoria e devolver ao usu�rio o valor total � ao final de todos os c�digos(flag c�digo = 0)
//o programa dever� mostrar o valor total da compra . Obs: caso o c�digo n�o exista na tabela dever� mostrar uma mensagem de erro e pedir novo c�digo.


float valor_produto(int,int);
int main()
{
    int codigo=1,quantidade=0;
    float valor_final=0;
    setlocale(LC_ALL,"portuguese");
    printf(" - DIGITE 0 PARA PARAR -\n");
    do
    {
        printf("Digite o C�digo do produto:");
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
                printf("\nERRO: C�digo Inv�lido - Digite um n�mero entre 100 e 103\n");
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
