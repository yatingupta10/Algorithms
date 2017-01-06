#include<iostream.h>
#include<conio.h>
void printing(int b[15][15],char s1[],int n1,int n2)
{
	int i=n1,j=n2,k=0;char c[10];
	while(i>0&&j>0)
	{
		if(b[i][j]==1)
		{
			i--;
		}
		else if(b[i][j]==-1)
		{
			j--;
		}
		else
		{
			c[k]=s1[i-1];
			i--;j--;k++;
		}
	}
	for(i=k-1;i>=0;i--)
		cout<<c[i];
}
void lcs(char s1[],char s2[],int n1,int n2)
{
	int i,j,c[15][15],b[15][15];
	for(i=1;i<=n1;i++)
		c[i][0]=0;
	for(j=0;j<=n2;j++)
		c[0][j]=0;
	for(i=1;i<=n1;i++)
	{
		for(j=1;j<=n2;j++)
		{
			if(s1[i-1]==s2[j-1])
			{
				c[i][j]=c[i-1][j-1]+1;
				b[i][j]=0;
			}
			else if(c[i-1][j]>=c[i][j-1])
			{
				c[i][j]=c[i-1][j];
				b[i][j]=1;
			}
			else
			{
				c[i][j]=c[i][j-1];
				b[i][j]=-1;
			}
		}
	}
	printing(b,s1,n1,n2);
}

void main()
{
	char s1[20],s2[20];
	int i,j;
	clrscr();
	cout<<"Enter the first string: ";
	cin>>s1;
	cout<<"Enter the second string: ";
	cin>>s2;
	for(i=0;s1[i]!='\0';i++);
	for(j=0;s2[j]!='\0';j++);
	lcs(s1,s2,i,j);
	getch();
}



