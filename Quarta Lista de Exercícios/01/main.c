#include <stdio.h>
#include <stdlib.h>

/*
QUARTA LISTA DE EXERC�CIOS - QUEST�O 1
AUTOR: Matheus Nolasco Miranda Soares
DATA: 24/05/2020
*/

 //1 ) Escrever uma fun��o que pe�a ao usu�rio um valor, caso o valor seja menor do que zero mostre a mensagem �Valor dever� ser maior ou igual a zero� e pe�a novamente um novo n�mero. A fun��o s� poder� retornar um valor v�lido.
int valores();
int main()
{
    valores();
    return 0;
}

int valores()
{
    int a;
    printf("Digite um Valor:");
    scanf("%d",&a);
    if (a<0)
    {
        printf("O valor tem que ser maior ou igual a zero!\n");
        valores();
    }
    return a;
}
