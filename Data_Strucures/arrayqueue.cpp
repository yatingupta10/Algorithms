#include<iostream.h>
#include<conio.h>
#include<process.h>

void main()
{
	clrscr();
	int ch,i,rear=-1,front=-1,queue[10];
	x:
	cout<<endl<<endl;
	cout<<"Enter Choice 1> Insert  2> Delete  3>exit "<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1: if(front==-1) {
			front=0;
		}
			rear++;
		if(rear<=9) {
			cout<<"Enter The Element"<<endl;
			cin>>queue[rear];
			cout<<"Queue is"<<endl;
		for(i=0;i<=rear;i++) {
			cout<<queue[i];
			}
		}
		else {
			cout<<"QUEUE OVERFLOW!!";
		}
		goto x;

		case 2: if(rear==-1) {
		rear=0;
		}
if(front==-1) {
			cout<<" UNDER FLOW !!"<<endl;
			goto x;
		}
		else
		if(rear==front) {
			queue[front]='\0';
			front=-1;
			rear=-1;
			goto x;
		}
		else {
			queue[front]='\0';
			front++;
		}
		cout<<"Queue is"<<endl;
		for(i=front;i<=rear;i++) {
			cout<<queue[i];
		}
		goto x;
		case 3: exit(0);
default : goto x;
	}     }
