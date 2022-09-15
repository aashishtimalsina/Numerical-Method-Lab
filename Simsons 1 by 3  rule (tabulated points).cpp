/*program to find Integration of given tabulated points by using Simson's 1/3 rule*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define max 15
void main()
{
	clrscr();
   int n,n1,n2,m,l,i;
   float a,b,h,sum,Ics,i1,i2,x[max],y[max];
   printf("\nNumber of data points:");
   printf("\nn=");scanf("%d",&n);
   printf("\nInput the values set by set");
   for(i=1;i<=n;i++)
   {
   	printf("\nX%i=",i);scanf("%f",&x[i]);
      printf("\nY%i=",i);scanf("%f",&y[i]);
   }
   printf("\nInput the initial value.");
   printf("\na=");scanf("%f",&a);
   printf("\nInput the final value.");
   printf("\nb=");scanf("%f",&b);
   printf("\nWhat is segments width? ");
   scanf("%f",&h);
   n1= (int)(fabs(a-x[1])/h+1.5);
   n2= (int)(fabs(b-x[1])/h+1.5) ;
   m=n2-n1;
   if(m%2==0)
   {
   	i2=0.0;
      l=n2-2;
   }
   else
   {
   	i2=(y[n2-1]+y[n2]*h/2.0);
      l=n2-3;
   }
   sum=0.0;
   for(i=n1;i<=l;i+2)
   	sum =sum+y[i]+4*y[i+1]+y[i+2];
   i1=sum*h/3.0;
   Ics= i1+i2;
   printf("\nIntegral from %f to %f is %f\n",a,b,Ics);
   getche();
}

