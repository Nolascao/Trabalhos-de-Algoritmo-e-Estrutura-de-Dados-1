#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

 /*
QUARTA LISTA DE EXERCÍCIOS - QUESTÃO 10
AUTOR: Matheus Nolasco Miranda Soares
DATA: 31/05/2020
*/

//10)Elabore um procedimento para calcular o dígito verificador de um CPF,deverá receber como parâmetro de entrada uma string com os 9 primeir os dígitos do cpf e deverá devolver dois parâmetros
//um como primeiro digito e outro como segundo digito . Teste o métodoa partir de main().

int VERIFICADOR(char[10]);
int main()
{
    char cpf[10];
    setlocale(LC_ALL,"portuguese");
    printf("Digite os 9 primeiros números do seu CPF:\n");
    fflush(stdin);
    gets(cpf);
    printf("O dígito verificador do CPF: %s é %d",cpf,VERIFICADOR(cpf));
    return 0;
}

int VERIFICADOR(char CPF[10])
{
    int i,j,digitos,constante1=10,digito1=0,constante2=11,digito2=0;
    char auxiliar;
    /*
       TESTE: 123456789
       1*10 + 2*9 + 3*8 + 4*7 + 5*6 + 6*5 + 7*4 + 8*3 + 9*2 = 210
       210/11 = 209 resto=1
       resto 1 -> RESULTADO ESPERADO: digito1 = 0  OBTIDO: digito 1 = 4
       1*11 + 2*10 + 3*9 + 4*8 + 5*7 + 6*6 + 7*5 + 8*4 + 9*3 + digito1*2
       255/11 = 253 resto=2
       resto 2 -> RESULTADO ESPERADO: digito2 = 11-2 = 9  OBTIDO: digito 2 = 3
    */
    for (i=0;i<10;i++)
    {
        strcpy(&auxiliar,&CPF[i]);
        digitos= atoi(&auxiliar);
        digito1= (digitos*constante1)+digito1;
        constante1--;
    }
    digito1=digito1%11;
    if (digito1<=1)
    {
        digito1=0;
    }
    else
    {
        digito1=11-digito1;
    }
    for (j=0;j<=10;j++)
    {
        digitos= atoi(&CPF[i]);
        digito2= (digitos*constante1)+digito2;
        constante2--;
    }
    digito2=digito2+(2*digito1);
    digito2=digito2%11;
    if (digito2<=1)
    {
        digito2=0;
    }
    else
    {
        digito2=11-digito2;
    }
    return (10*digito1)+digito2;
}
