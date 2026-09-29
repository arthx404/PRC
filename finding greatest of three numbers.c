#include<stdio.h>
main()
{
    int n1,n2,n3;
    printf("enter the value of n1\n");
    scanf("%d",&n1);
    printf("enter the value of n2\n");
    scanf("%d",&n2);
    printf("enter the value of n3\n");
    scanf("%d",&n3);
    if (n1>n2)
    if (n2>n3)
    {
        printf("n1 the greatest number\n");
    }
    else
    {
        printf("n3 is the greatest number\n");
    }
    if (n2>n3)
    {
        printf("n2 is the greatest number\n");
    }
    else
    {
        printf("n3 is the greatest number\n");
    }
}
