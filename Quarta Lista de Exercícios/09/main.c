#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 /*
QUARTA LISTA DE EXERCÍCIOS - QUESTÃO 9
AUTOR: Matheus Nolasco Miranda Soares
DATA: 31/05/2020
*/

//9) Construa um método que calcule a potenciação. Projete os parâmetros de entrada (inteiros e positivos) e o valor de retorno. Teste-o a partir de main(). Obs. Você não pode utilizar a função pow

int potencia(int,int);
int main()
{
    int base,expoente;
    setlocale(LC_ALL,"portuguese");
    printf("Dê o número a ser elevado:");
    scanf("%d",&base);
    printf("Dê o expoente da potência:");
    scanf("%d",&expoente);
    if (base<0 || expoente<0)
    {
        printf("ERRO: Números Inválidos - Insira números inteiros e positivos");
    }
    else
    {
        printf("%d elevado a %d é igual a %d",base,expoente,potencia(base,expoente));
    }
    return 0;
}

int potencia(int a, int b)
{
    int i, resultado=a;
    if (b==0)
    {
        resultado=1;
    }
    else
    {
        for ( i=1; i<b ; i++)
        {
            resultado=resultado*a;
        }
    }
    return resultado;
}
