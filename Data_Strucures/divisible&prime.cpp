#include<iostream.h>
#include<conio.h>

int divide(int a,int b)
 {
	if((a%b)==0)
	return 1;
	else
	return 0;
}
int divide(int a) {
	int j=a/2,flag=1;
	for(int i=2;(i<=j)&&(flag);i++) {
		if(a%i==0)
		flag=0;
	}
	return flag;
}
int main() 
{
	clrscr();
	int ch,res,a,b;
	do {
		cout<<"1.Check for divisibility\n";
		cout<<"2.Check for prime\n";
		cout<<"3.Exit\n";
		cout<<"Enter your choice (1-3):";
		cin>>ch;
		cout<<endl;
		switch(ch) {
			case 1 :cout<<"Enter the Numerator and Denominator\n";
					  cin>>a>>b;
					  res=divide(a,b);
					  cout<<((res)? "It is" : "It is not")<<endl;
					  break;
			case 2 :cout<<"Enter the number\n";
					  cin>>a;
					  res=0;
					  res=divide(a);
					  cout<<((res)? "It is" : "It is not")<<endl;
					  break;
			case 3 :break;
			default:cout<<"Wrong choice!\n";
		};
	}while(ch>0&&ch<3);
	return 0;
}
