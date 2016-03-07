/*function overloading
*/
#include<iostream.h>
#include<conio.h>
float area(int a){
	return a*a;
}
float area(int a, int b){
	return a*b;
}
float area(float a){
	return 3.14*a*a;
}
void main(){
	clrscr();
	float a;
	cin>>a;
	cout<<area(2)<<endl;
	cout<<area(a)<<endl;
	cout<<area(2,4);
	getch();
}