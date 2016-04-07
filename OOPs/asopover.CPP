#include <iostream.h>
#include <conio.h>

class A {
	int a;
	public:
		A(){
			a=1;
		}
		A(int x){
			a=x;
		}
		void operator = (A a1) {
			a = a1.a;
		}
		void display() {
			cout<<a<<endl;
		}
};

void main() {
	A a1(2);
	A a2;
	a2 = a1;
	a2.display();
	getch();
}
