#include<stdio.h>
main()
{
  int a=10;
  int b;
b=a++;
printf("value of a= %d",a);
printf("value of b=%d",b);
b=++a;
printf("value of a=%d",a);
printf("value of b=%d",b);
}
