#include<iostream.h>
#include<stdio.h>
#include<conio.h>

class A{
	int a;
	public:
	A(int x){
	       a=x;
	}
	void operator -(){
		a=-a;
	}
	void display(){
		cout<<a;
	}
};
void main(){
       A a1(3);
       -a1;
       a1.display();
}