#include <stdio.h>
#include <conio.h>
#include <math.h>
#define f(x,y) 2.0*y/x
void main()
{
  clrscr();
  int i,n;
  float x,y,xp,h;
  float m1,m2,m3,m4;
  printf("Input initial value of x and y");
  scanf ("%f%f",&x,&y);
  printf("Input X-value at which Y is required :\n");
  scanf("%f",&xp);
  printf("Input  step size:\n");
  scanf("%f",&h);
  n=(int)((xp-x)/h+0.5);
  for (i=1;i<=n;i++)
  {
  		m1=f(x,y);
      m2=f(x+0.5*h,y+(m1*h*0.5));
      m3=f(x+0.5*h,y+(m2*h*0.5));
      m4=f(x+h,y+m3*h);
      x=x+h;
      y=y+((m1+2.0*m2+2.0*m3+m4)*h)/6.0;
      printf("x=%f and y=%f\n",x,y);
  }
  printf("\n Value of y at xp =%f is %f",x,y);
  getche();
}



