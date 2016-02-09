#include<stdio.h>
#include<conio.h>
struct node
{       char name[20];
	int id;
	struct node *llink;
	struct node *rlink;
}*trav,*start;
void display()
{       trav=start;
	printf("\nelements in list");
	while(trav!=NULL)
	{
		printf("->%d %s",trav->id,trav->name);
		trav=trav->rlink;
	}
	printf("\n");
}
void main()
{
	char ch;
	int a;
	start=NULL;
	while(1)
	{       struct node *p;
		p=(struct node*)malloc(sizeof(struct node));
		printf("\n1.insertion\n2.deletion\n3.exit\n");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
			{
				printf("\nenter the id: ");
				scanf("%d",&p->id);
				printf("\nenter the name: ");
				scanf("%s",p->name);
				if(start==NULL)
				{
					start=p;
					p->llink=NULL;
					p->rlink=NULL;
				}
				else
				{
					p->llink=NULL;
					p->rlink=start;
					start->llink=p;
					start=p;
				}
				display();
				break;
			}
			case 2:
			{       p=start;
				if(start==NULL)
				printf("\nUNDERFLOW!!");
				else if(p->rlink==NULL)
				{
					free(p);
					start=NULL;
				}
				else{
				while(p->rlink!=NULL)
				p=p->rlink;
				(p->llink)->rlink=NULL;
				free(p);}
				display();
				break;
			}
			case 3: exit(0);
		}
		getch();
	}
}