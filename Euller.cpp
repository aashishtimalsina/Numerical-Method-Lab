#include<stdio.h>
#include<conio.h>
#define f(x,y) 2*y/x

void main()
{
	clrscr();
	int i,n;
	float x,y,h,xp,dy;
	printf("\nInput initialvalue of x and y;\n");
	scanf("%f%f",&x,&y);
	printf("Input X-value at which y is required:");
	scanf("%f",&xp);
	printf("\nInput stop size:");
	scanf("%f",&h);
	n=(xp-x)/h+0.5;
	for(i=1;i<=n;i++)
	{
		dy=h*f(x,y);
		x=x+h;
		y=y+dy;
		printf("\nx=%f n y=%f",x,y);
	}
	printf("\nValue of y at x=%f is %f",x,y);
	getch();
}
