#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node{
	int num;
	struct node *link;
}*front,*trav,*rear;
void display(){
	trav=front;
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
	front=NULL;
	rear==NULL;
	while(1){
		struct node *p;
		p=(struct node*)malloc(sizeof(struct node));
		if(p==NULL)
		printf("overflow");
		printf("\n1.insertion\n2.deletion\n3.exit\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:{
				printf("\nenter the number: ");
				scanf("%d",&p->num);
				if(rear==NULL)
				{
					front=p;
					rear=p;
					p->link=NULL;
				}
				else{   rear->link=p;
					p->link=NULL;
					rear=p;
				}
				display();
				break;
			}
			case 2:{
				p=front;
				if(front==NULL)
				printf("\nUNDERFLOW");
				else if(p->link==NULL)
				{
					free(p);
					front=NULL;
					rear=NULL;
				}
				else{
					front=front->link;
					free(p);
				}
				display();
				break;
			}
			case 3: exit(0);
		}getch();
	}

}