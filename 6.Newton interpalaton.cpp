// NEWTON INTERPOLATION
#include<stdio.h>
#include<math.h>
#include<conio.h>
#define MAX 10
void main()
{
	int i,j,n;
   float xp,fp,pro,sum,a[MAX],f[MAX],x[MAX],d[MAX][MAX];
   printf("\nInput the number of data points:");
   printf("\nn=");scanf("%d",&n);
   for(i=0;i<n;i++)
   {
   	printf("\nInput the data of x[%d]&f[%d]:",i,i);
   	printf("\nx[%d]=",i);scanf("%f",&x[i]);
      printf("\nf[%d]=",i);scanf("%f",&f[i]);
   }
   for(i=1;i<=n;i++)
		d[i][1]=f[i];
   for(j=2;j<=n;j++)
   	for(i=1;i<=n-j+1;i++)
      	d[i][j]=(d[i+1][j-1]-d[i][j-1])/(x[i+j-1]-x[i]);
   for(j=1;j<=n;j++)
   	a[j]=d[1][j];
   printf("\nInput the value of xp point:");
	printf("\nxp=");scanf("%f",&xp);
   sum=a[1];
   for(i=2;i<=n;i++)
   {
   	pro= 1.0;
      for(j=1;j<=i-1;j++)
      pro=pro*(xp-x[j]);
      sum=sum+a[i]*pro;
   }
	fp=sum;
   printf("\n At xp=%f is %f",xp,fp);
   getch();
}




