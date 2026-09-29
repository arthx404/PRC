#include<stdio.h>
main()
{
float h, w, BMI;
printf("enter name: \n");
scanf("%c", &n);
printf("enter height: \n");
scanf("f", &h);
printf("enter weighty: \n");
scanf("%f", &w);

bmi= w/ (h*h);
printf("bmi is= %f\n", bmi);

if(bmi <18.5)
{
  printf("UNDERWEIGHT\n");
}
else if ((bmi>=18.6) && (bmi<=29.9))
{
    printf("OVERWEIGHT\n");
}
else if (bmi>30)
{

    printf("OBESE\n");
}



}




}
