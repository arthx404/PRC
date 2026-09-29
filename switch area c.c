#include<stdio.h>
main()
{
    int choice;
    float l,b,h,r,carea,tarea,rarea;
    printf("1. Enter area of circle\n");
    printf("2. Enter area of rectangle\n");
    printf("3. Enter area of triangle\n");
    printf("Enter Choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
case 1:
    printf("enter radius\n");
    scanf("%f",& r);
    carea=3.14*r*r;
    printf("Area of circle=%f",carea);
    break;
case 2:
    printf("enter lenght(l)\n");
    scanf("%f",& l);
    printf("enter breadth(b)\n");
    scanf("%f",&b);
    rarea=l*b;
    printf("area of rectangle=%f",rarea);
    break;
case 3:
    printf("enter lenght(l)\n");
    scanf("%f",&l);
    printf("enter breadth(b)\n");
    scanf("%f",&b);
    printf("enter height(h)\n");
    scanf("%f",&h);
    tarea=1/2*b*h;
    printf("area of triangle\n",tarea);
    break;
default:
    printf("wrong choice");
    break;
}
}
