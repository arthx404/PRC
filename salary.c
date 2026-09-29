#include<stdio.h>
main()
{
float gs, bs, hra, da;
printf("enter basic salary:");
scanf("%f",&bs);
if(bs<= 20000)
{
 da=0.8* bs;
 hra= 0.2* bs;
 gs= bs+ hra+ da;
 }
 else if (bs > 20000 &&bs <= 30000)
{
    da= 0.9* bs;
     hra=0.25* bs;
     gs=bs+hra+da;
}
else
{
    da=0.95* bs; hra= 0.3* bs; gs=bs+hra+da;
}
printf("gross salary= %f", gs);
}






