#include <stdio.h>
#include <conio.h>
#include <math.h>
//#define f(x,y) (2.0*y/x)
void main()
{
  clrscr();
  int n,i;
  float x,y,xp,h;
  float m1,m2,m3,m4;
  float func(float , float );
  printf("Input initial value of x and y");
  scanf ("%f%f",&x,&y);
  printf("Input X-value at which Y is required :\n");
  scanf("%f",&xp);
  printf("Input  step size:\n");
  scanf("%f",&h);
  n=(int)((xp-x)/h+0.5);
  for (i=1;i<=n;i++)
  {
  		m1=func(x,y);
      m2=func(x+0.5*h,y+0.5+m1*h);
      m3=func(x+0.5*h,y+0.5+m2*h);
      m4=func(x+h,y+m3*h);
      x=x+h;
      y=y+(m1+2.0*m2+2.0*m3+m4)*h/6.0;
      printf("x=%f and y=%f\n",x,y);
  }
  printf("\n Value of y at x=%f is %f",x,y);
    getche();
}
float func(float x, float y)
  {
  		float f;
      f=x*x+y*y;
      return(f);
  }



