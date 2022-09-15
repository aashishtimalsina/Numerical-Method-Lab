/*program to solve Integration equation by using gauss integration method for
n=3 interpolating point*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) exp(x)
void main()
{
	clrscr();
   int n=3,i;
   float a,b,w[3],z[3],x[3],Ig =0.0000;
   printf("\nInput initial value of x:");
   printf("\na=");scanf("%f",&a);
   printf("\nInput final value of x:");
   printf("\nb=");scanf("%f",&b);
   w[0]=0.55556;
   w[1]=0.88889;
   w[2]=0.55556;
   z[0]=-0.77460;
   z[1]=0.00;
   z[2]=0.77460;
   for (i=0;i<n;i++)
   	x[i]=((b-a)/2)* z[i]+((b+a)/2);
   for(i=0;i<n;i++)
   	Ig +=((b-a)/2)*(w[i]*f(z[i]));
   printf("\nIntegral from %f to %f is %f\n",a,b,Ig);
   getche();
}

