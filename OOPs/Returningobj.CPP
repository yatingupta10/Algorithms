#include<iostream.h>
#include<conio.h>

class complex{
	int a,b;
	public:
	complex(void)                                          //default constructor
	{
		a=0;
		b=0;
	}
	complex(int c, int d)                                        //parameterized constructor
	{
		a=c;
		b=d;
	}
	complex add(complex x,complex y)   //function for addition of complex number
	{
		complex z;
		z.a=x.a+y.a;
		z.b=x.b+y.b;
		return z;
	}
	void put_data();                                      //function to display number
};
void complex :: put_data()
{
	cout<<"\n"<<a<<" + i"<<b;
}


int main()
{
	complex  t4(1,2), t3(3,4), t5;
	clrscr();
	t4. put_data();
	t3. put_data();
	t5=t5.add(t3,t4);                                      //calling of friend function
	t5.put_data();
	getch();
	return (0);
}

