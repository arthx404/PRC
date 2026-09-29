#include<stdio.h>
main()
{
 float carea, tarea, rarea, r, l, b,h, bl;
 int choice;
 printf("1. circle \n");
 printf("2. rectangle \n");
 printf("3. triangle \n");
 printf(" enter your choice");
 switch(choice)
 case 1: printf("enter radius \n");
             scanf("%f", &r);
             carea= 3.14 * r * r;
             printf("area= %f \n", carea);
             break;

case 2:printf("enter l & b\n");
           scanf("%F %f", &l, &b);
           rarea= l*b;
           printf("area= %f\n", rarea);
           break;

case 3:printf("enter base & height \n");
           scanf("%f %f", &bl, &h);
           tarea= 0.5* bl* h;
           printf("area= %f \n", tarea);
           break;

default: printf("invalid");
             break;
 } }











