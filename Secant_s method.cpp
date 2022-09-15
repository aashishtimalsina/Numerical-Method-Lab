#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#define max 20
#define E .0001
#define f(x) x*x*x+x*x-3*x-3
void main()
{
float x1,x2,x3,f1,f2,f3;
int count=0;
printf("Please enter two values within which the roots lie!\n");
scanf("%f%f",&x1,&x2);
f1=f(x1);
f2=f(x2);
if(fabs(f1)<fabs(f2))
{
float temp;
temp=x1;
x1=x2;
x2=temp;
temp=f1;
f1=f2;
f2=temp;
}
begin:
	count++;
	x3=x2-((f2*(x2-x1))/(f2-f1));
   f3=f(x3);
   x1=x2;
   f1=f2;
   x2=x3;
   f2=f3;
   if(count>max)
   {
   printf("Root couldn't be found under the limited iteration");
   getch();
   exit(0);
   }
   else if(fabs(f2)<E)
   {
   printf("The root is =%f",x2);
   printf("No.of iterations=%d",count);
   }
   else
   goto begin;
getch();
}

