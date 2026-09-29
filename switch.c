#include<stdio.h>
main()
{
    int  num1,num2,sum,sub,mul,div;
    char choice;
    printf("**Menu**\n");
    printf("\n  (a) . Addition");
    printf("\n  (b) . Subtraction");
    printf("\n  (c) . Multiplication");
    printf("\n  (d) . Division");

    printf("enter your choice from the Menu\n");
    scanf("%c",&choice);
    printf("\n  please enter number 1:\n");
    scanf("%d",&num1);
    printf("enter number 1:\n");
    scanf("%d",&num2);

    switch(choice)
    {
    case 'a' :
        sum=num1+num2;
        printf("addition of two number is=%d",sum);
        break;

    case 'b' :
        sub=num1-num2;
        printf("subtraction of two number is=%d",sub);
        break;

    case 'c' :
        mul=num1*num2;
        printf("multiplication of two numbers is=%d",mul);
        break;

    case 'd' :
        div=num1/num2;
        printf("Division of two numbers is=%d",div);
        break;

    default:
        printf("wrong choice");
        break;
}
}
