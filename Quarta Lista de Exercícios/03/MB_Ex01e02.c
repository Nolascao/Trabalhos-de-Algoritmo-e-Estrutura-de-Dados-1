#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Valores(int a, int b)
{
    if (a<0 || b<0 )
    {
        printf("O valor tem que ser maior ou igual a zero!\n");
        return 1;
    }
    else
    {
        return 0;
    }
}

float Hipotenusa(int cat1,int cat2)
{
    float hip;
    if (cat1==0 || cat2==0)
    {
        return 0;
    }
    else
    {
        hip=(float)sqrt(pow(cat1,2)+pow(cat2,2));
        return hip;
    }
}
