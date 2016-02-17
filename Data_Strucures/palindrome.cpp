#include<iostream.h>
#include<ctype.h>
#include<string.h>
void main()
{
	int l,i,flag=1;
	char word[20];
	cout<<" enter a word";
	cin>>word;
	l=strlen(word);
	for(i=0;i<l/2;i++)
	{
		if(word[i]!=word[l-1-i])
		flag=0;
	}
	if(flag==1)
	cout<<" yes it is palindrome";
	else
	cout<<" no it is not a palindrome";
}
