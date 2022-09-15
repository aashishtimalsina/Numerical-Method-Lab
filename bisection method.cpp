//write a program to find the root of the non-linear equation using bisection method
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define e 0.0001
#define F(x) x*x*x-4*x-9
void main()
{
clrscr();
int count=0;
float x0,x1,x2,F0,F1,F2;
printf("Enter two initial guess values\n");
scanf("%f%f",&x1,&x2);
F1=F(x1);
F2=F(x2);
	if(F1*F2>0)
   printf("Sorry,Solution of it doesn't exists\n");
   	else
      {
      	begin:
         x0=(x1+x2)/2;
         F0=F(x0);
         	if(F1*F0<0)
            {
            x2=x0;
            F2=F0;
            }
            else
            {
            x1=x0;
            F1=F0;
            }
         if((fabs(x2-x1)/x1)<e)
         {
         x0=(x1+x2)/2;
         printf("Root=%f\n",x0);
         printf("Functional value =%f",F(x0));
         printf("\n Iterative step= %d",count);
         }
         else
         {
         count=count+1;
         goto begin;
         }
         }
         getch();
         }
