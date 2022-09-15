// Heuns method
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define max 15
void main()
{
	clrscr();
   int n,i;
   float x,y,xp,h,m1,m2;
   float func(float,float);
   printf("\n***Solution of Heuns method***");
   printf("\nEnter the initial value of x \n");
   scanf("%f",&x);
   printf("\nEnter the initial value of y \n");
   scanf("%f",&y);
   printf("\nInput x at which y is required");
   scanf("%f",&xp);
   printf("\nInput step size");
   scanf("%f",&h);
   n=(int)((xp-x)/h+0.5);
   for(i=1;i<=n;i++)
   {
   	m1=func(x,y);
      m2=func(x+h,y+m1*h);
      x=x+h;
      y=y+0.5*h*(m1+m2);
   	printf("%5d %10.6f %10.6f\n",i,x,y);
   }
   printf("\nThe value of y at x=%f is %f\n",x,y);
   getch();
}
float func(float x,float y)
{
	float f;
   f=2.0*y/x;
   return(f);
}
   
