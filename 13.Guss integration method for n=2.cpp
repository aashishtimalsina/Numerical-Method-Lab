/*program to solve Integration equation by using gauss integration method for
n=2 interpolating point*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) exp(x)
void main()
{
	clrscr();
   int n=2,i;
   float a,b,w[2],z[2],x[2],Ig =0.0;
   printf("\nInput initial value of x:");
   printf("\na=");scanf("%f",&a);
   printf("\nInput final value of x:");
   printf("\nb=");scanf("%f",&b);
   w[0]=1.0;
   w[1]=1.0;
   z[0]=-0.5773502;
   z[1]=0.5773502;
   for (i=0;i<n;i++)
   	x[i]=((b-a)/2)* z[i]+((b+a)/2);
   for(i=0;i<n;i++)
   	Ig +=((b-a)/2)*(w[i]*f(z[i]));
   printf("\nIntegral from %f to %f is %f\n",a,b,Ig);
   getche();
}

