#include<iostream.h>
#include<process.h>
int Lsearch(int [],int,int);
void main()
{
	int AR[50],ITEM,N,index;
	cout<<"How many elements do u want to create array with?(max 50)\n";
	cin>>N;
	cout<<"\nEnter Array elements\n";
	for(int i=0;i<N;i++)
	cin>>AR[i];
	char ch='y';
	while(ch=='y'||ch=='Y') {
		cout<<"\nEnter the element to be deleted\n";
		cin>>ITEM;
		if(N==0) {
			cout<<"Underflow!!\n";
			exit(1);
		}
		index=Lsearch(AR,N,ITEM);
		if(index!=-1)
		AR[index]=0;
		else
		cout<<"Sorry!! No such element in the array\n";
		cout<<"\nThe array is now is as shown below\n";
		cout<<"Zero(0) signifies deleted element\n";
		for(i=0;i<N;i++)
		cout<<AR[i]<<" ";
		cout<<endl;
		cout<<"After this emptied space will be shifted to the end of array\n";
		for(i=index;i<N;i++) {
			AR[i]=AR[i+1];  //shift elements to bring empty space at the end of array
		}
			N-=1;
			cout<<"\nWant to delete more elements?(y/n)";
			cin>>ch;
		}
		cout<<"The array after shifting all emptied spaces towards right is\n";
		for(i=0;i<N;i++)
		cout<<AR[i]<<" ";
		cout<<endl;
}
int Lsearch(int AR[],int size,int item)
{
	for(int i=0;i<size;i++) {
		if(AR[i]==item)
		return i;
	}
	return -1;  //the control will reach here only when item is not found
}
