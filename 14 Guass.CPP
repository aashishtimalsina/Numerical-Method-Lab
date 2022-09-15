//program to solve integration equation using guss integration method for n=3 interpolating points.


#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) exp(-x/2)
void main()
{
clrscr();
int i,n=3;
float k[3], a,b,w[3],z[3],x[3],ig=0.0;
printf("input the initial value of x:");
scanf("%f",&a);
printf("input final value of x:");
scanf("%f",&b);
w[0]=-0.5555;
w[1]=0.8888;
w[2]=0.5555;
z[0]=-0.77460;
z[1]=0;
z[2]=0.77460 ;
for(i=0;i<n;i++)
x[i]=((b-a)/2)*(z[i]+(b+a)/2);
for(i=0;i<n;i++)
{
       k[i]=f(z[i]);
	ig+=((b-a)/2)*(w[i]*k[i]);
}
printf("\n Intergration betwn %f and %f is =%f",a,b,ig);
getch();
}
