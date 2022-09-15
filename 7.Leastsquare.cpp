// Least square method
#include<stdio.h>
#include<math.h>
#include<conio.h>
#define MAX 10
void main()
{
	int i,n;
   float a0,a1;
   float x[MAX],y[MAX],sumx=0.0,sumy=0.0,sumxy=0.0,sumxsq=0.0;
   printf("***Least square method***" );
   printf("\nInput the number of data points:");
   printf("\nn=");scanf("%d",&n);
   printf("Enter the data sets one after another:");
   for(i=0;i<n;i++)
   {
     //	printf("\nInput the data of x[%d]&f[%d]:",i,i);
   	printf("\nx[%d]=",i);scanf("%f",&x[i]);
      printf("\ny[%d]=",i);scanf("%f",&y[i]);
      sumx+=x[i];
      sumy+=y[i];
      sumxy+=x[i]*y[i];
      sumxsq+=x[i]*x[i];
   }
   a0=(sumy*sumxsq-sumx*sumxy)/(n*sumxsq-pow(sumx,2));
   a1=(n*sumxy-sumx*sumy)/(n*sumxsq-pow(sumx,2));
   printf("The equation of line:\n");
   printf("\n y=%fx+%f",a1,a0);
   getch();
}


