#include<iostream.h>
#include<process.h>
int FindPos(int [],int,int);
void main()
{
	int AR[50],ITEM,N,index;
	cout<<"How many elements do u want to create array with?(max 50)\n";
	cin>>N;
	cout<<"\nEnter Array elements(must be sorted in Asc order)\n";
	for(int i=0;i<N;i++)
	cin>>AR[i];
	char ch='y';
	while(ch=='y'||ch=='Y') {
		cout<<"\nEnter the element to be inserted\n";
		cin>>ITEM;
		if(N==50) {
			cout<<"Overflow!!\n";
			exit(1);
		}
		index=FindPos(AR,N,ITEM);
		for(i=N;i>index;i--) {
			AR[i]=AR[i-1];  //shift elements to create room for new element
		}
			AR[index]=ITEM;
			N+=1;
			cout<<"\nWant to insert more elements?(y/n)";
			cin>>ch;
		}
		cout<<"The array now is shown below\n";
		for(i=0;i<N;i++)
		cout<<AR[i]<<" ";
		cout<<endl;
}
int FindPos(int AR[],int size,int item)
{
	int pos;
	if(item<AR[0])
	pos=0;
	else {
		for(int i=0;i<size-1;i++) {
			if(AR[i]<=item&&item<AR[i+1]) {
				pos=i+1;
				break;
			}
		}
		if(i==size-1)
		pos=size;
	}
	return pos;
}
