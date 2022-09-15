#include<iostream.h>
#include<conio.h>
#include<math.h>


class complex
{
	int real,imag;
   public:
      complex()
      {
      	real=imag=0;
      }
      void input()
      {
      	cout<<"Enter real and imaginary part of a complex no.;\n";
         cin>>real>>imag;
      }
      void display(complex temp,int a)
      {
         if (a==1)
      	cout<<real<<"+("<<imag<<"i)"<<" is greater than "<<temp.real<<"+("<<temp.imag<<"i)." ;
         else
         cout<<real<<"+("<<imag<<"i)"<<" and "<<temp.real<<"+("<<temp.imag<<"i) are equal." ;

      }
      int operator>(complex x)
      {
         float a,b;
         a=sqrt((real*real)+(imag*imag));
         b=sqrt((x.real*x.real)+(x.imag*x.imag));
         if (a>b)
         	return 1;
         else
         	return 0;
      }
      int operator==(complex x)
      {
         float a,b;
         a=sqrt((real*real)+(imag*imag));
         b=sqrt((x.real*x.real)+(x.imag*x.imag));
         if (a==b)
         	return 1;
         else
         	return 0;
      }
};

void main()
{
	complex c1,c2;
   c1.input();
   c2.input();
   if(c1>c2)
      c1.display(c2,1);
   else if (c1==c2)
      c1.display(c2,0);
   else
   	c2.display(c1,1);

   getch();
}