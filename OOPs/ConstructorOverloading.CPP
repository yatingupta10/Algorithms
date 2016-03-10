/*constructor overloading*/
#include<iostream.h>
#include<conio.h>
class A{
	int x;
	public:
		A(){
			cout<<"default constructor is called" <<endl;
		}
		A(int a){
			x=a;
			cout<<"parameterized constructor is called "<<x;
		}

};
void main(){
	clrscr();
	A a;
	A b(10);
	getch();
}