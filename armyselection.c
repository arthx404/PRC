#include<stdio.h>
main()
{
  int age, height;
  printf("enter age\n");
  scanf("%d",age);
  printf("enter height\n");
  scanf("%d"&height);

  if((age>=18)&&(height>=5))
  printf("congrats!! you are selected\n");
else
  printf("sorry.....rejected\n");

}
