#include<stdio.h>
main()
{
    int year;
    printf("enter the value of the year\n");
    scanf("%d",&year);
    if((year%4==0)&&(year%100!=0))
    {
        printf("year is leap year");
    }
    else
    {
        printf("year is not leap year");
    }
}
