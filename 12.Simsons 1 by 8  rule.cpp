/*program to find Integration of given funtion by using Simson's 1/8 rule*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define F(x) (x*x*x+1)
void main()
{
	clrscr();
   float a,b,h,Is;
   printf("\nEnter initial value of X:");
   scanf("%f",&a);
   printf("\nEnter  Final  value of X:");
   scanf("%f",&b);
   h=(b-a)/3;
   Is=3*h*(F(a)+3*F(a+h)+3*F(a+2*h)+F(b))/8;
   printf("\nIntegral from %f to %f\n",a,b);
   printf("Integration is %f \n",Is);
   getch();
}



