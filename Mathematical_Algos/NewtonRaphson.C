#include<math.h>
#include<stdio.h>
#include<conio.h>

float f(float x)
{
	return x*x + 6*x + 8;
}
float df(float a)
{
	return 2*a + 6;
}
int main()
{
	float aa,xn,x0;
	int i;
	clrscr();
	printf("function is x^2+6x+8") ;
	printf("\nenter the initial value: ");
	scanf("%f",&x0);
	xn=x0;
   while(f(xn)!=0)
   {
		xn=xn - (f(xn)/df(xn));
		printf("\n%f",xn) ;
   }
   getch();
   return 0;
}