#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>

class student{
	char name[20];
	int rollno;
	int marks[5];
	float percent;
	public:
	void inputdata();
	void displaydata();
	void getpercent();
};
void student::inputdata()
{       int i;
	cout<<"\nenter the name: ";
	gets(name);
	cout<<"\nenter the roll number: ";
	cin>>rollno;
	cout<<"\nenter the marks";
	for(i=0;i<5;i++)
	{
		cin>>marks[i];
	}
}
void student::getpercent()
{
	int temp=0;
	int i;
	for(i=0;i<5;i++)
	{
		temp+=marks[i];
	}
	percent=temp/5;
	cout<<"\npercentage is: "<<percent;
	if(percent>=75)
		cout<<"\ngrade is A";
	else if(percent>=65 && percent<=74)
		cout<<"\ngrade is B";
	else
		cout<<"\ngrade is C";
}

void student::displaydata()
{
	cout<<"\nname of the student: ";
	puts(name);
	cout<<"\nroll no of student: "<<rollno;
}
void main()
{
	int ch,j;
	student s[3];
	while(1){
	cout<<"\n1.inputdata 2.displaydata 3.grade 4.exit";
	cin>>ch;
	switch(ch){
		case 1: for(j=0;j<3;j++){
			s[j].inputdata();     }
			break;
		case 2: for(j=0;j<3;j++){
			s[j].displaydata();   }
			break;
		case 3: for(j=0;j<3;j++){
			s[j].getpercent();    }
			break;
		case 4: exit(0);
	}        }
	getch();
}