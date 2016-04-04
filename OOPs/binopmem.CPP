#include<iostream.h>
#include<stdio.h>
#include<conio.h>

class A{
	int a;
	public:
	A(int x){
	       a=x;
	}
	void operator +(int y){
		a=a+y;
	}
	void display(){
		cout<<a;
	}
};
void main(){
	clrscr();
       A a1(3),a2(0);
       a2=a1+6;
       a2.display();
       getch();
}