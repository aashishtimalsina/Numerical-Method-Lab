/*program to find Integration of given funtion by using Trapezoidal rule*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	int n,i;
   float a,b,h,sum,Ict;
   float f(float x);
   printf("\nEnter initial value of X:");
   scanf("%f",&a);
   printf("\nEnter  Final  value of X:");
   scanf("%f",&b);
   printf("\nEnter  the segments width:");
   scanf("%f",&h);
   n=(a-b)/h;
   sum=(f(a)+f(b))/2.0;
   for(i=0;i<=n;i++)
   {
     sum=sum+f(a+i*h);
   }
   Ict =h*sum;
   printf("\nThe integration value of function :%f",Ict);
   getch();
}
float f(float x)
{
float f;
f=1.0-exp(-x/2.0);
return(f);
}
