#include<iostream.h>
void merge(int[],int,int[],int,int[]);
void main()
{
	int A[50],B[50],C[50],MN=0,M,N;
	cout<<"How many elements do u want to create first array with?(max 50)"<<endl;
	cin>>M;
	cout<<"\nEnter first array's elements[ascending]...\n";
	for(int i=0;i<M;i++)
		cin>>A[i];
	cout<<"How many elements do u want to create second array with?(max 50)"<<endl;
	cin>>N;
	MN=M+N;           //array C's size is calculated
	cout<<endl<<"Enter second array's elements[descending]..."<<endl;
	for(i=0;i<N;i++)
		cin>>B[i];
	merge(A,M,B,N,C);
	cout<<"\n\nThe merged array is as shown below..\n";
	for(i=0;i<MN;i++)
		cout<<C[i]<<" ";
	cout<<endl;
}
void merge(int A[],int M,int B[],int N,int C[])
{
	int a,b,c;     //M-size of array A; N-size of array B; C-resultant array
	for(a=0,b=N-1,c=0;a<M&&b>=0;) {
		if(A[a]<=B[b])
		C[c++]=A[a++];
		else
		C[c++]=B[b--];
	}
	if(a<M) {
		while(a<M)
		C[c++]=A[a++];
	}
	else {
		while(b>=0)
		C[c++]=B[b--];
	}
}
