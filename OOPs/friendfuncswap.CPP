/* Define 2 classes a and b
find the greatest no. from private members
include following one int value
2nf func to initialise
define friend func (obj as arg)
*/
#include<iostream.h>
#include<conio.h>

class B;
class A{
	int x;
	public:
	void initialise(int a){
		x=a;
	}
	friend void compare(A,B);
};

class B{
	int y;
	public:
	void initialise(int b){
		y=b;
	}
	friend void compare(A,B);

};

void compare(A a,B b){
	int temp;
	temp=a.x;
	a.x=b.y;
	b.y=temp;
	cout<<"obj of a: "<<a.x<<endl<<"obj of b: "<<b.y;
}

void main(){
	clrscr();
       A a;
       B b;
       a.initialise(10);
       b.initialise(20);
       compare(a,b);
       getch();
}
