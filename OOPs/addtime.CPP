#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<process.h>
class time{
	int hours,mins;
	public:
	void gettime(){
		hours=0;
		mins=0;
		cout<<"enter the hours: ";
		cin>>hours;
		cout<<"enter the mins: ";
		cin>>mins;
	}
	void sum(time t1){
		mins+=t1.mins;
		if(mins>60){
		hours+=mins/60;
		mins=hours*60-mins;
		}
		hours+=t1.hours;
	}
	void display(){
		cout<<"time is: "<<hours<<" : "<<mins;
	}
};
void main(){
	clrscr();
	time t2,t3;
	t2.gettime();
	t3.gettime();
	t2.sum(t3);
	t2.display();
	getch();
}