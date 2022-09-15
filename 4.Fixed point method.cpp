/*program to find Rootof a fuction by using Fixed point method*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100
#define E 0.001
#define g(x) exp(x)/3
void main()
{
	clrscr();
   int count=0;
   float x0,x1,error;
   printf("\nEnter the initial guess value of x0\n");
   scanf("%f",&x0);
   begin:
   x1=g(x0);
   error=fabs(x1-x0);
   if(error<=E)
   {
   	printf("\nThe root is %f",x1);
      printf("\nThe error value %f",error);
      printf("\nThe iteration steps is %d",count);
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
     		printf("It solution does not coverge");
     	}

   }
   getch();
}
