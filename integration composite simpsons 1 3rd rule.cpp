/*******************************************************
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
write a program to find the integration of a function by
using composite simpsons 1/3 rule
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
********************************************************/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) sqrt(sin(x))
void main()
{
float a,b,is1,h;
int n;
printf("Enter the limits of integration\n");
scanf("%f%f",&a,&b);
printf("\nEnter positive number n i.e. the number of segments to be made\n");
scanf("%d",&n);
h=(b-a)/n;
float x,y;//x for taking summation of odds and y for evens
for(int i=1;i<=(n/2);i++)
x+=f(a+(2*i-1)*h);////////////////////////////////look the logic
x*=4;
for(int i=1;i<=((n/2)-1);i++)
y+=f(a+(2*i)*h);//////////////////////////////////look the logic
y*=2;
is1=f(a)+f(b)+x+y;
is1*=(h/3);
printf("The value of integration obtained is\nIs1=%f",is1);
getch();
}
