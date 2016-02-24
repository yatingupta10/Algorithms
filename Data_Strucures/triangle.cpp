#include<iostream.h>

void main()
{
	long a,b,c;
	cout<<"Enter a side"<<endl;
	cin>>a;
	cout<<"Enter another side"<<endl;
	cin>>b;
	cout<<"Enter other side"<<endl;
	cin>>c;
	if((a+b>c)||(b+c>a)||(c+a>b)) {
		if((a==b)&&(b==c)&&(c==a))
		cout<<"Triangle is an equilateral triangle";
		else if ((a==b)||(b==c)||(c==a))
		cout<<"Triangle is an isosceles triangle";
		else if (((a*a+b*b)==c*c)||((b*b+c*c)==a*a)||((c*c+a*a)==b*b))
		cout<<"Triangle is right angled";
	}
	else
	cout<<"Triangle is not possible";
}

