#include <stdio.h>
#include <stdlib.h>
void Media(float*);
int main()
{
    float resultado;
    Media(&resultado);
    printf("A media foi %f",resultado);
    return 0;
}

void Media (float *r)
{
   int a,b,c=0,divisor;
   printf("De um valor - para parar digite 0 - ");
   scanf("%d",&a);
   while (a!=0 && b!=0)
   {
     divisor++;
     a=a+c;
     printf("De um valor - para parar digite 0 - ");
     scanf("%d",&b);
     c=b;
   }
   *r=a/divisor;

}
