#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define E 0.00001
#define F(x) x*x-4*x-10
#define max 20

void main()
{
	int count=0;
   float x1,x2,x3,f1,f2;
   printf("Enter two initial value:");
   scanf("%f%f",&x1,&x2);
   f1=F(x1);
   f2=F(x2);
   begin:
   	x3=(f2*x1-f1*x2)/(f2-f1);
      if(fabs((x3-x2)/x3)>E)
      {
         count++;
      	if(count<max)
         {
         	x1=x2;
            f1=f2;
            x2=x3;
            f2=F(x3);
            goto begin;
         }
         else
         {
         	printf("\nDoesnt converge");
            exit(0);
         }
      }
		else
      	printf("\nRoot=%f\nNo. of iterations=%d",x3,count);
      getch();
}