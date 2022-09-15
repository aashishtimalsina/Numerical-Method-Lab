/*program to find Root of a fuction by using Secant method*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 10
#define E 0.0001
#define f(x) x*x-4*x-10
main()
{
	clrscr();
   int count=0;
   float x1,x2,x3,f1,f2;
   printf("\nEnter the two value of x1 and x2\n");
   scanf("%f%f",&x1,&x2);
   begin:
   f1=f(x1);
   f2=f(x2);
   x3=x2-f2*(x2-x1)/(f2-f1);
   if((fabs(x3-x2)/x2)<E)
   {
   	printf("\nRoot=%f",x3);
      printf("\nNo. of Iteration steps=%d",count);
   }
   else
   {
   	x1=x2;
      x2=x3;
      f1=f2;
      f2=f(x3);
     	count ++;
     	if (count<MAX)
     	{
          goto begin;
     	}
     	else
      {
      printf("It solution does not coverge");
      }

   }
   getche();
}
