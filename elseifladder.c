#include<stdio.h>
main()
{
    int total,s1,s2,s3;
    printf("enter marks for s1\n");
    scanf("%d",&s1);
    printf("enter marks of s2\n");
    scanf("%d",&s2);
    printf("enter marks of s3\n");
    scanf("%d",&s3);
    total=s1+s2+s3;
    printf("total=%d\n",total);
    if((total>=80)&&(total<=90))
    {
        printf("congrats..excellent class\n");
    }
    else if((total>=70)&&(total<80))
    {
        printf("nice..first class\n");
    }
    else if((total>=60)&&(total<=70))
    {
        printf("nice..second class\n");
    }
    else if ((total>=50)&&(total<=60))
    {
        printf("poor..third class\n");
    }
    else
    {
        printf("you have failed better luck next time\n");
    }
}
