#include<stdio.h>

#include<math.h>

double c0,c1,c2,c3,aa,bb;

double cal(double x)
{
	return (c3*x*x*x) + (c2*x*x) + (c1*x) + c0;
}

void find(double a,double b)
{
	double x,ans,fa,fb;
	if(a!=b)
	{
        x=(a+b)/2.0;
        ans=cal(x);

        if(ans>0)
        {
            b=x;
            find(a,b);
        }
        else if(ans<0)
        {
            a=x;
            find(a,b);
        }

        else
        {
            printf("\nRoot is %lf ",x);
        }
	}

	else
	printf("\n No root");
}

int main()
{
	int ch;

	printf("Enter \n 1 for system-defined polynomial \n 2 for user-defined polynomial \n ");
	scanf("%d",&ch);

	switch(ch)
	{
		case 1:
		c0=8;
		c1=6;
		c2=1;
		c3=0;
		aa=-3.7,bb=-5;
		find(aa,bb);
		break;

		case 2:
		printf("\nEnter the coeff : ");
		scanf("%lf%lf%lf%lf",&c3,&c2,&c1,&c0);
		printf("\nEnter the guesses : ");
		scanf("%lf%lf",&aa,&bb);
		if(cal(aa) > 0 && cal(bb) < 0)
		find(bb,aa);
		else if (cal(aa)*cal(bb) > 0)
		printf("\nWrong guesses");
		else
		find(aa,bb);
		
		break;

		default:printf("\n Wrong choice \n");
	}

	return 0;

}