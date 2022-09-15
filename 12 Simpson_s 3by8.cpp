//program to implement the 3/8 simpson   rule
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define max 10
#define f(x) sin(x)


void main()
{
	clrscr();
	float a,b,h,is;

	printf("\n Enter the initial value of x:");
	scanf("%f",&a);

   printf("\n Enter the initial value of x:");
	scanf("%f",&b);

	h=(b-a)/3;
	is=3*h*(f(a)+3*(a+h)+3*f(a+2*h)+f(b))/8;

	printf("\n Integration value:%f", is);

   getch();
}