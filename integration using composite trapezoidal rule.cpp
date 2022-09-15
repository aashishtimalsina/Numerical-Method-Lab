/*****************************************************
******************************************************
Write a program to find the integration of the given
function using composite trapezoidal method
*****************************************************/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) pow(2.71828,x)
void main()
{
float a,b,n,h,ict;
printf("Please enter the limits of integration\n");
scanf("%f%f",&a,&b);
printf("\nEnter the no. of segments to be made i.e. value of n\n");
scanf("%f",&n);
ict=0;
h=(b-a)/n;
for(int i=1;i<n;i++)
ict+=(f(a+i*h));// taking summation from i=1 to n-1 of fi
ict*=2;// multiplying  the summation by 2
ict+=(f(a)+f(b));//adding f0 and fn to  the summation
ict*=(h/2);//now multiplying by h/2 to obtain the formula
printf("The integrated value is \n ict=%f",ict);
getch();
}
