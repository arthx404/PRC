#include<stdio.h>
int main()
{
 int a, b, band, bor, bexor, bnot;
 printf("enter the value of a\n");
 scanf("%d",&a);

 printf("enter the value of b\n");
 scanf("%d",&b);

 band=(a & b);
 bor=(a|b);
 bexor=(a ^ b);
 bnot=(~a);
 printf("AND is =%d\n", band);
 printf("OR is =%d\n",bor);
 printf("EXOR is=%d\n",bexor);
 printf("NOT is =%d\n", bnot);

 return 0;
}

