#include<stdio.h>
main()
{
    int totalmarks;
    printf("enter your totalmarks\n");
    scanf("%d",&totalmarks);

    if(totalmarks>=50)
    {
        goto pass;
    }
    else
    {
        goto fail;
    }
    pass :
            printf("congrats you have passed the exam");
            return;
    fail :
            printf("sorry you have failed the exam");
            return;
}
