#include<stdio.h>
main()
{
char a [20];
char b [20];
printf("enter string:");
gets(a);
strcpy (b,a);
printf("copied string=");
puts(b);
}
