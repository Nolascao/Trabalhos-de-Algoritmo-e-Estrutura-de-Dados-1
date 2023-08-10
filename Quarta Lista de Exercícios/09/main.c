#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 /*
QUARTA LISTA DE EXERC�CIOS - QUEST�O 9
AUTOR: Matheus Nolasco Miranda Soares
DATA: 31/05/2020
*/

//9) Construa um m�todo que calcule a potencia��o. Projete os par�metros de entrada (inteiros e positivos) e o valor de retorno. Teste-o a partir de main(). Obs. Voc� n�o pode utilizar a fun��o pow

int potencia(int,int);
int main()
{
    int base,expoente;
    setlocale(LC_ALL,"portuguese");
    printf("D� o n�mero a ser elevado:");
    scanf("%d",&base);
    printf("D� o expoente da pot�ncia:");
    scanf("%d",&expoente);
    if (base<0 || expoente<0)
    {
        printf("ERRO: N�meros Inv�lidos - Insira n�meros inteiros e positivos");
    }
    else
    {
        printf("%d elevado a %d � igual a %d",base,expoente,potencia(base,expoente));
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
