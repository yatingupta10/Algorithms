#include<iostream.h>
#include<stdio.h>
#include<conio.h>

class A{
	int a;
	public:
	A(int x){
	       a=x;
	}
	friend void operator -(A &);
	void display(){
		cout<<a;
	}
};
void operator -(A &a2){
	a2.a=-a2.a;
}
void main(){
	clrscr();
       A a1(3);
       -a1;
       a1.display();
       getch();
}