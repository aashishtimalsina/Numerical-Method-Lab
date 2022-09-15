//Eluer method
#include <stdio.h>
#include <conio.h>
#include <math.h>
#define f(x,y) 2*y/x
void main()
{
  clrscr();
  int i,n;
  float x,y,h,xp,dy;
  printf("Input initial value of x and y");
  scanf ("%f%f",&x,&y);
  printf("Input X-value at which Y is required :\n");
  scanf("%f",&xp);
  printf("Input  step size:\n");
  scanf("%f",&h);
  n=((xp-x)/h+0.5);
  for (i=1;i<=n;i++)
  {
  		dy=h*f(x,y);
      x=x+h;
      y=y+dy;
      printf("x=%f and y=%f\n",x,y);
  }
  printf("\n Value of y at x =%f is %f",x,y);
  getche();
}



