#include<iostream.h>
#include<stdio.h>
#include<conio.h>

class A{
	int a;
	public:
	A(int x){
	       a=x;
	}
	friend A operator +(int y,A a3);
	void display(){
		cout<<a;
	}
};
A operator +(int y,A a3){
	  A a4(0);
	  a4.a=a3.a+y;
	  return a4;
}
void main(){
	clrscr();
       A a1(3),a2(0);
       a2=8+a1;
       a2.display();
       getch();
}