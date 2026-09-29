#include<stdio.h>
main()
{
    int age,height;
    printf("enter age\n");
    scanf("%d",&age);
    printf("enter height\n");
    scanf("%d",&height);
    if(age>=18)
    {
        if(height>=5)
        {
            printf("congrats you are selected in Army\n");
        }
        else
        {
            printf("sorry..you are not selected due to less height\n");
        }
    }
    else
    {
        printf("sorry you are not selected due to age factor!!\n");
    }
}
