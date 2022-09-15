/*    Algorithm for fixed point iteration or direct substitution method*/
/*write a program to  find out the  root of non-linear equation*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define e .0001
#define max 20
#define g(x) exp(x)/3
void main()
{
int count=0;
float x0,x1,error;
printf("enter the initial guess value of x\n");
scanf("%f",&x0);
begin:
x1=g(x0);
error=fabs(x1-x0);
if(error<=e)
{
printf("\n the root is %f",x1);
printf("\n The error is %f",error);
printf("No of steps is %d",count);
}
else
{
x0=x1;
count++;
if(count<max)
goto begin;
else
printf("the process doesnot converge");
}
getch();
}

