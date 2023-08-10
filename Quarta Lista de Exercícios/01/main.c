#include <stdio.h>
#include <stdlib.h>

/*
QUARTA LISTA DE EXERCÍCIOS - QUESTÃO 1
AUTOR: Matheus Nolasco Miranda Soares
DATA: 24/05/2020
*/

 //1 ) Escrever uma função que peça ao usuário um valor, caso o valor seja menor do que zero mostre a mensagem “Valor deverá ser maior ou igual a zero” e peça novamente um novo número. A função só poderá retornar um valor válido.
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
