/*program to find Integration of given funtion by using composit Trapezoidal rule*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
   int i,n;
   float a,b,h,sum,Ict;
   float F(float x);
   printf("Enter the initial value of a:");
   scanf("%f",&a);
   printf("\nEnter the Final  value of b: ");
   scanf("%f",&b);
   printf("\nEnter the segment width:");
   scanf("%f",&h);
   n=(b-a)/h;
   sum =(F(a)+F(b))/2.0;
   for(i=1;i<n-1;i++)
   {
   	sum= sum +F(a+i*h);
   }
   Ict=sum*h;
   printf("\nThe integration between %f and %f at h=%f is %f",a,b,h,Ict);
   getch();
}
float F(float x)
{
	float f;
	f=1-exp(-x/2.0) ;
   return (f);
}
