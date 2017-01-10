#include<iostream.h>
#include<conio.h>
tsk(int a[],int s[],int f[],int n)
{
	int m,i,c,sum=0,t=0;
	cout<<"Tasks: ";
       //	cout<<"T"<<a[0]<<" ";
	m=s[0];
	c=1;
	for(i=0;i<n;i++)
	{       t+=f[i];
		if(s[i]>m)
		{
			m=s[i];
		}
		if(c<=m){
			c++;
			cout<<"T"<<a[i]<<" ";
			sum+=f[i];
		}
	}
	cout<<"Penalty sum: "<<t-sum;
}

void main()
{
	int n,a[20],i,j,temp,s[20],f[20];
	clrscr();
	cout<<"Enter the no. of tasks: ";
	cin>>n;
	for(i=0;i<n;i++)
		a[i]=i+1;
	cout<<"Enter the deadline of all tasks: ";
	for(i=0;i<n;i++)
		cin>>s[i];
	cout<<"Enter the penalty of all tasks: ";
	for(i=0;i<n;i++)
		cin>>f[i];
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(f[j]<f[i])
			{
				temp=f[j];
				f[j]=f[i];
				f[i]=temp;
				temp=s[j];
				s[j]=s[i];
				s[i]=temp;
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	tsk(a,s,f,n);
	getch();
}
