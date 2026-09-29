#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
   char a[100];
   clrscr();
   printf("enter a string:\n");
   gets(a);
   strlwr(a);
   printf(" the string in lower case is=%s",a);
   getch();
}
