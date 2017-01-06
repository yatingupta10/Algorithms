#include<iostream.h>
#include<conio.h>
void brackets(int s[][],int i,int j)
{
	if(i==j)
		cout<<"(A"<<i;
	else
	{
		brackets(s,i,s[i][j]);
		brackets(s,s[i][j]+1,j);
	}
	cout<<")";
}
void mcm(int p[],int n)
{
	int m[n+1][n+1],s[n+1][n+1];
	int i,j,l,k;
	for(i=1;i<=n;i++)
		m[i][i]=0;
	for(l=2;l<n;l++)
	{
		for(i=1;i<n-l+1;i++)
		{
			j=i-l+1;
			m[i][j]=0;
			for(k=i;k<=j-1;k++)
			{
				q=m[i][k]+m[k+1][j]+(p[i-1]*p[k]*p[j];
				if(m[i][j]==0)
				{
					m[i][j]=q;
					s[i][j]=k;
				}
				else if(q<m[i][j])
				{
					m[i][j]=q;
					s[i][j]=k;
				}
			}
		}
	}
	brackets(s,1,n);
}
void main()
{
	int n,i;
	clrscr();
	cout<<"Enter the no. of elements in p array:";
	cin>>n;
	int p[n];
	cout<<"Enter the p array:";
	for(i=0;i<n;i++)
		cin>>p[i];
	mcm(p,n);
	getch();
}