/*program to find Integration of given tabulated data using  Composit Trapezoidal rule*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define max 15
void main()
{
	clrscr();
   int n,n1,n2,i;
   float a,b,h,sum,ict,x[max],y[max];
   printf("\nEnter the number of data points:");
   printf("\nn=");scanf("%d",&n);
   printf("\nInput the values set by set");
   for(i=1;i<=n;i++)
   {
   	printf("\nX%i=",i);scanf("%f",&x[i]);
      printf("\nF(x%i)=",i);scanf("%f",&y[i]);
   }
   printf("\nInput the initial value.");
   printf("\na=");scanf("%f",&a);
   printf("\nInput the final value.");
   printf("\nb=");scanf("%f",&b);
 	h=x[2]-x[1];
   n1= (int)(fabs(a-x[1])/h+1.5);
   n2= (int)(fabs(b-x[1])/h+1.5) ;
   sum=0.0;
   for(i=n1;i<=n2;i++)
   	sum =sum+y[i]+y[i+1];
   ict= sum*h/2.0;
   printf("\nIntegral from %f to %f is %f\n",a,b,ict);
   getche();
}
