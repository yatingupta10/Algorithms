#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int ch,l,u,mid,c=0,i,n,e,a[50];
	cout<<"Enter the limit"<<endl;
	cin>>n;
	cout<<endl<<"Enter the elemnts"<<endl;
	for(i=0;i<n;i++) {
		cout<<endl;
		cin>>a[i];
	}
	cout<<"Enter the element to be searched for"<<endl;
	cin>>e;
	cout<<"Enter Your Choice    1:Linear   2:Binary  Search";
	cin>>ch;
	switch(ch) {
 		case 1 : for(i=0;i<n;i++) {
				if(a[i]==e)
				cout<<endl<<"Element is at  "<<i+1<<"  Position";
				c=c+1;
				}
			if (c==0)
			cout<<"Element Not Present";
			break;

		case 2: c=0;
			l=0;
			u=n-1;
			while(l<u) {
				mid=(l+u)/2;
				if (a[mid]==e) {
					cout<<"Element is at  "<<mid+1<<"  Position  "<<endl;
					c++;
					break;
				}
				if(e<a[mid])
					u=mid-1;
				if (e>a[mid])
					l=mid+1;
			}
			if (c==0)
				cout<<"Element not Present"<<endl;
			break;

		default : cout<<"Wrong Choice"<<endl;
				break;
	} getch();
}
