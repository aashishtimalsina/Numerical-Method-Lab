#include<stdio.h>
#include<conio.h>
#define f(x,y) 2*y/x

void main()
{
	clrscr();
	int i,n;
	float x,y,h,xp,m1,m2,m3,m4;
	printf("\nInput initialvalue of x and y;\n");
	scanf("%f%f",&x,&y);
	printf("Input X-value at which y is required:");
	scanf("%f",&xp);
	printf("\nInput stop size:");
	scanf("%f",&h);
	n=(xp-x)/h+0.5;
	for(i=1;i<=n;i++)
	{
      m1=f(x,y);
      m2=f(x+.5*h,y+.5*m1*h);
      m3=f(x+.5*h,y+.5*m2*h);
      m4=f(x+h,y+m3*h);
		x=x+h;
		y=y+h*(m1+2*m2+2*m3+m4)/6;
		printf("\nx=%f n y=%f",x,y);
	}
	printf("\nValue of y at x=%f is %f",x,y);
	getch();
}
