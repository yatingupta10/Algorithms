#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node{
	int num;
	struct node *link;
}*top,*trav;
void display(){
	trav=top;
	printf("\n elements in the list");
	while(trav!=NULL)
	{
		printf("->%d",trav->num);
		trav=trav->link;
	}
	printf("\n");
}
void main(){
	int ch;
	top=NULL;
	top->link=NULL;
	while(1){
		struct node *p;
		p=(struct node*)malloc(sizeof(struct node));
		if(p==NULL)
		printf("overflow");
		printf("\n1.push\n2.pop\n3.exit\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:{
				printf("\nenter the number: ");
				scanf("%d",&p->num);
				if(top==NULL)
				{
					top=p;
					p->link=NULL;
				}
				else{
					p->link=top;
					top=p;
				}
				display();
				break;
			}
			case 2:{
				p=top;
				if(top==NULL)
				printf("\nUNDERFLOW");
				else if(p->link==NULL)
				{
					free(p);
					top=NULL;
				}
				else{
					top=top->link;
					free(p);
				}
				display();
				break;
			}
			case 3: exit(0);
		}getch();
	}

}