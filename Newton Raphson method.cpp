#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) x*x-3*x+2
#define fd(x) 2*x-3
#define e 0.0001
#define max 20
	void main()
   {
   clrscr();
   int count=0;
   float x0,x1,fx,fdx;
   printf("enter the initial guess value of x\n");
   scanf("%f",&x0);
begin:
fx=f(x0);
fdx=fd(x0);
x1=x0-fx/fdx;
if((fabs(x1-x0)/x1)<e)
{
printf("root=%f\n",x1);
printf("the functional value =%f\n",f(x1));
printf("No. of iteration =%d\n",count);
}
else
{
x0=x1;
count++;
if(count<max)
goto begin;
	else
   printf("solution doesnt converge\n");
   }
   getch();
   }
   