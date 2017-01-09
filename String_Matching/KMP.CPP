#include<iostream.h>
#include<conio.h>
#include<string.h>
int a[20];
void prefix(char p[]){
	int m;
	m=strlen(p);
	int a[20],k;
	k=0;a[1]=0;
	for(int q=2;q<=m;q++){
		while(k>0&&p[k+1]!=p[q]){
			k=a[k];

		}
		if(p[k+1]==p[q]){
			k++;
		}
		a[q]=k;
	}
}
void main(){
	char p[20],t[20];
	cout<<"enter text: ";
	cin>>t;
	cout<<"enter pattern: ";
	cin>>p;
	int m,n;
	m=strlen(p);
	n=strlen(t);
	prefix(p);
	int q=0;
	for(int i=0;i<n;i++){
		while(q>0&&p[q]!=t[i]){
			q=a[q];
		}
		if(p[q]==t[i]){
			q++;
		}
		if(q==m){
			cout<<"\npattern found at: "<<i-m+1;
			q=a[m];
		}
	}

	getch();
}
