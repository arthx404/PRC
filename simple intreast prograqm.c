#include<stdio.h>
main()
{
int p, r, n ;
float SI=0.0;
printf("enter Principle\n");
scanf("%d",&p);
printf("Enter Rate of Intrest\n");
scanf("%d",&r);
printf("Enter Number of Years\n");
scanf("%d",&n);
SI=p*r*n/100;
printf("SI=%f",SI);
}
