/*program to find Integration of given funtion by using Simson's 1/3 rule*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define F(x) 1-exp(-(x)/2.0)
void main()
{
	clrscr();
   int n,m,i;
   float a,b,h,sum,Ics,x,f1,f2,f3;
   printf("Enter initial value of X:");
   printf("\na=");scanf("%f",&a);
   printf("\nEnter  Final  value of X:");
   printf("\nb=");scanf("%f",&b);
   printf("\nEnter number of segments (Even number):");
   printf("\nN=");scanf("%d",&n);
   h=(b-a)/n;
   m=n/2;
   sum =0.0;
   x=a;
   f1=F(x);
   for(i=1;i<m;i++)
   {
   	f2=F(x+h);
      f3=F(x+2*h);
      sum=sum+f1+4*f2+f3;
      f1=f3;
      x=x+2*h;
   }
   Ics=sum *h/3.0;
   printf("\nIntegral from %f to %f\n",a,b);
   printf("When h=%f is %f \n",h,Ics);
   getch();
}



