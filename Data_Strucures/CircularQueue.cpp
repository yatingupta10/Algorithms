#include<iostream.h>
#include<conio.h>
#include<process.h>
int Insert_in_CQ(int [],int);
void Display(int [],int,int);
int Del_in_CQ(int CQueue[]);
const int size=7;
int CQueue[size],front=-1,rear=-1;
void main()
{
	int Item,res,ch;
	do {
		clrscr();
		cout<<"\nCircular queue menu\n";
		cout<<"\n1.Insert\n";
		cout<<"\n2.Delete\n";
		cout<<"\n3.Display\n";
		cout<<"\n4.Exit\n";
		cout<<"\nEnter your choice(1-4) ";
		cin>>ch;
		switch(ch) {
			case 1 : cout<<"\nEnter ITEM for insertion: ";
						cin>>Item;
						res=Insert_in_CQ(CQueue,Item);
						if(res==-1)
						cout<<"OVERFLOW!!\n";
						else {
							cout<<"\nNow the Cir_Queue is:\n";
							Display(CQueue,front,rear);
						}
						getch();
						break;
			case 2 : Item=Del_in_CQ(CQueue);
						cout<<"Element deleted is: "<<Item<<endl;
						Display(CQueue,front,rear);
						getch();
						break;
			case 3 : Display(CQueue,front,rear);
						getch();
						break;
			case 4 : break;
			default: cout<<"Valid choices are 1...4 only\n";
						getch();
						break;
		}
	}while(ch!=4);
}
int Insert_in_CQ(int CQueue[],int ele)  //funct. to insert element in CIR_Queue
{
	if((front==0&&rear==size-1)||(front==rear+1))
	return -1;
	else if(rear==-1)
	front=rear=0;
	else if(rear==size-1)
	rear=0;
	else rear++;
		CQueue[rear]=ele;
	return 0;
}
void Display(int CQueue[],int front,int rear)
{
	int i=0;
	cout<<"\nCir_Queue is:\n"<<"(front shown as >>>,Rear as <<< AND free space as-)\n";
	if(front==-1)
	return;
	if(rear>=front) {
		for(i=0;i<front;i++)
		cout<<"-";
		cout<<">>>";
		for(i=front;i<rear;i++)
		cout<<CQueue[i]<<"<-";
		cout<<CQueue[rear]<<"<<<"<<endl;
	}
	else {
		for(i=0;i<rear;i++)
		cout<<CQueue[i]<<"<-";
		cout<<CQueue[rear]<<"<<<";
		for( ;i<front;i++)
		cout<<"-";
		cout<<">>>";
		for(i=front;i<size;i++)
		cout<<CQueue[i]<<"<-";
		cout<<"\n...wrap around..";
	}
}
int Del_in_CQ(int CQueue[]) //funct. to delete element
{
	int ret;
	if(front==-1)
	return -1;
	else {
		ret=CQueue[front];
		if(front==rear)
		front=rear=-1;
		else if(front==size-1)
		front=0;
		else front++;
	}
	return ret;
}
