#include<iostream.h>
#include<stdio.h>
#include<conio.h>

class student{
	int r_no;
	char name[20];
	public:
	 virtual void getdetails(){
		cout<<"enter the roll no.: " ;
		cin>>r_no;
		cout<<"enter name: " ;
		gets(name);
	}
	virtual void dispdetails(){
		cout<<"Roll No: "<<r_no;
		cout<<"\nName: ";
		puts(name);
	}
};
class test:virtual public student{
	int i;
	public:
	float marks[5];
	void getmarks(){
		cout<<"enter the marks: ";
		for(i=0;i<5;i++)
		cin>>marks[i];
	}
	void dispmarks(){
		cout<<"\nMarks: ";
		for(i=0;i<5;i++)
		cout<<marks[i];
	}
};
class sports:virtual public student{
	public:
	float spmarks;
	void getspmarks(){
		cout<<"\nenter sports marks: ";
		cin>>spmarks;
	}

};

class result: public test,public sports{
	float total,percent;
	char grade;
	int j;
	public:
	void calculate(){
		total=0;
		getspmarks();
		for(j=0;j<5;j++)
		total+=marks[j];
		total+=spmarks;
		percent=total/6;
		if(percent>90)
			grade='A';
		else if (percent>75)
			grade='B';
		else
			grade='C';
	}
	void dispresult(){
		cout<<"\nPercentage: "<<percent;
		cout<<"\nGrade: "<<grade;
	}
};

void main(){
	clrscr();
	result r;
	r.getdetails();
	r.getmarks();
	r.calculate();
	r.dispdetails();
	r.dispresult();
	getch();
}

