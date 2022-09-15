/*program to find Rootof a fuction by using Newton Raption method*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 10
#define E 0.0001
#define f(x)  x*x*x-3*x-2
#define fd(x)  3*x*x-3
void main()
{
	clrscr();
   int count=0;
   float x0,x1,fx,fdx;
   printf("\nEnter the initial value of x0\n");
   scanf("%f",&x0);
   begin:
   printf("\nStep %d",count+1);
   fx=f(x0);
   printf("\nvalue of fx%d=%f",count,fx);
   fdx=fd(x0);
   printf("\nvalue of fdx%d= %f",count,fdx);
   x1=x0-(fx/fdx);
   if((fabs(x1-x0)/x1)<E)
   {
   	printf("\nRoot=%f",x1);
      printf("\nThe fuction value=%f",f(x1));
      printf("\nNo. of Iritation steps=%d",count);
   }
   else
   {
   	x0=x1;
      count ++;
      if (count<MAX)
      {
      goto begin;
      }
      else
      {
      printf("It takes more than 10 steps So solution does not coverse");
      }
   }
   getche();
}
