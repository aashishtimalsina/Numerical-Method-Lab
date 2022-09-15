/***********************************************************
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Write a program to evaluate the integral of a given function
using simpsons 1/3 method
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) sqrt(sin(x))
void main()
{
float a,b,h,is1;
printf("Enter the value of the limits of the function\n");
scanf("%f%f",&a,&b);
float x1;
h=(b-a)/2;
x1=(a+b)/2;
is1=h/3*(f(a)+f(b)+4*f(x1));
printf("\nThe value of integration is \nIs1=%f",is1);
getch();
}

