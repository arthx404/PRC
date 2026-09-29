#include<stdio.h>
main()
{
    int bs,gs,da,hra;
    printf("enter value of bs\n");
    scanf("%d",& bs);
    printf("enter value of da\n");
    scanf("%d",& da);
    printf("enter value of hra\n");
    scanf("%d",& hra);
    if (bs<=20000)
    {
        da= bs*0.80;
        hra=bs*0.20;
        gs=bs+da+hra;
        printf("gs=%d",gs);
    }
    else if(bs>=20001 && bs<=30000)
    {
        da=bs*0.25;
        hra=bs*0.90;
        gs=bs+da+hra;
        printf("gs=%d",gs);
    }
    else if(bs>30001)
    {
        da=bs*0.30;
        hra=bs*0.90;
        gs=bs+da+hra;
        printf("gs=%d",gs);
    }
}
