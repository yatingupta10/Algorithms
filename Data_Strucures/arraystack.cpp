#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
	clrscr();
	int ch,i,top=-1,stack[5];
	x:
	cout<<endl<<endl;
	cout<<"Enter Choice 1> Insert  2> Delete  3>exit "<<endl;
	cin>>ch;
	switch(ch) {
		case 1: top++;
		if(top<=4) {
			cout<<"Enter The Element"<<endl;
			cin>>stack[top];
			cout<<"The Stack is"<<endl;
			for(i=0;i<=top;i++)
			cout<<stack[i];
			goto x;
		}
		else {
			cout<<"  Stack OVERFLOW !! "<<endl;
			goto x;
		}
case 2: if(top>=0) {
			top--;
			cout<<"Stack is"<<endl;
			for(i=0;i<=top;i++)
			cout<<stack[i];
			goto x;
		}
		else {
			cout<<" Stack UNDER FLOW !!"<<endl;
			goto x;
		}
case 3: exit(0);
default :
		cout<<"WRONG CHOICE !!!!!!!!!!! "<<endl;
		goto x;
	}
}
