#include<stdio.h>
#include<conio.h>
#include<math.h>
#define E .00001
#define g(x) exp(x)/3
#define m 20

void main()
{
	int count=0;
   float x0,x1,error;
   scanf("%f",&x0);
   begin:
   	x1=g(x0);
      error=fabs(x1-x0);
      if (error<=E)
      	printf("\n%f\n%f\n%d",x1,error,count);
      else
      {
      	x0=x1;
         count++;
         if(count<m)
         	goto begin;
         else
         	printf("\nsds");
      }
   getch();
}

