//write a program to find the interpolated value of x from given set of
//data points using lagranges interpolation polynomial
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define max 10
void  main()
{
int i,j,n;
printf("Please enter the number of data points\n");
scanf("%d",&n);
float xp,x[max],f[max],pro,sum=.0;
for(i=0;i<n;i++)
{
printf("enter x%d and f(x%d)\n",i,i);
scanf("%f%f",&x[i],&f[i]);
}
printf("Please enter the point at which interpolation is required\n");
scanf("%f",&xp);

for(i=0;i<n;i++)
{
pro=1.0;
for(j=0;j<n;j++)
{
if(i!=j)
pro=pro*(xp-x[j])/(x[i]-x[j]);
}
sum+=(f[i]*pro);
}
printf("The interpolated value of %f is %f",xp,sum);
getch();
}


