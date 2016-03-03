#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>

class bank{
	char name[20];
	int accountno;
	int balance;
	public:
	void inputdata();
	void deposit();
	void withdraw();
	void displaydata();
};
void bank::inputdata(){
	cout<<"\nenter your name: ";
	gets(name);
	cout<<"enter account number: ";
	cin>>accountno;
	balance=0;
}
void bank::deposit(){
	int dep;
	cout<<"\nenter the amount you want to deposit: ";
	cin>>dep;
	balance+=dep;
}
void bank::withdraw(){
	int withd;
	cout<<"your net balance is: "<<balance;
	if(balance<=0)
		cout<<"you cannot withdraw no balance!!";
	else{
	cout<<"\nenter the amount you want to withdraw: ";
	cin>>withd;
	balance-=withd;}
}
void bank::displaydata(){
	cout<<"\n name: ";
	puts(name);
	cout<<"account number: "<<accountno;
	cout<<"\nbalance: "<<balance;
}
void main(){
	clrscr();
	int ch;
	bank b;
	while(1){
		cout<<"\n1.inputdata 2.deposit 3.withdraw 4.displaydata 5.exit ";
		cin>>ch;
		switch(ch){
			case 1: b.inputdata();
				break;
			case 2: b.deposit();
				break;
			case 3: b.withdraw();
				break;
			case 4: b.displaydata();
				break;
			case 5: exit(0);
		}
	}
}

