#include<iostream.h>
#include<conio.h>

class A {
	int a;
	public:
		/*A(int x){
			a=x;
		}*/
		friend istream & operator >> (istream &, A&);
		friend ostream & operator << (ostream &, A&);
};

istream & operator >> (istream &it,A &a1){
	it >> a1.a;
	return it;
}

ostream & operator << (ostream &ot, A &a1){
	ot << a1.a << endl;
	return ot;
}

void main() {
	clrscr();
	A a1,a2;
	cout<<"Enter values";
	cin>>a1;
	cout<<a1;
	cout<<"Enter values";
	cin>>a2;
	cout<<a2;
	getch();
}

