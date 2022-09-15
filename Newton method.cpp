#include<stdio.h>
#include<conio.h>
#include<math.h>
#define E 0.00001
#define F(x) x*x-3*x+2
#define Fd(x) 2*x-3
#define max 20

void main()
{
	int count=0;
   float x1,x0,fx,fdx;
   printf("Enter initial value:");
   scanf("%f",&x0);
   begin:
   	fx=F(x0);
      fdx=Fd(x0);
      x1=x0-(fx/fdx);
      if(fabs((x1-x0)/x1)<E)
      	printf("\nRoot=%f\nNo. of iterations=%d",x0,count);
      else
      {
      	x0=x1;
         count++;
         if(count<max)
         	goto begin;
         else
            printf("\Doesnt converge");

      }
      getch();
}


