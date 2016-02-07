#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	int n;
	struct node *lc,*rc;
}*r=NULL,*p=NULL,*ptr=NULL,*new=NULL;

void predisp(struct node *fr)
{
	if(fr==NULL)
		return;
	printf("%d , ",fr->n);
	predisp(fr->lc);
	predisp(fr->rc);
}

void postdisp(struct node *fr)
{
	if(fr==NULL)
		return;
	postdisp(fr->lc);
	postdisp(fr->rc);
	printf("%d , ",fr->n);
}

void indisp(struct node *fr)
{
	if(fr==NULL)
		return;
	indisp(fr->lc);
	printf("%d , ",fr->n);
	indisp(fr->rc);
}

void ins()
{
	new=(struct node*)malloc(sizeof(struct node));
	printf("enter element -> ");
	scanf("%d",&new->n);
	new->lc=NULL;new->rc=NULL;

	ptr=r;
	if(ptr==NULL)
		r=new;
	else
	{
		while(ptr!=NULL)
		{
			p=ptr;
			if(new->n < p->n)
				ptr=p->lc;
			else
				ptr=p->rc;
		}
		if(new->n < p->n)
				p->lc=new;
			else
				p->rc=new;
	}
}

void del()
{
	int item;
	struct node *par;
	printf("\nenter element to delete : ");
	scanf("%d",&item);
	ptr=r;
	while(ptr-> n!=item)
	{
		par=ptr;
		if(item<ptr->n)
			ptr=ptr->lc;
		else
			ptr=ptr->rc;
	}
	if(ptr->lc==NULL && ptr->rc == NULL)
		{
			if(p->lc==ptr)
				p->lc=NULL;
			else
				p->rc=NULL;
			free(ptr);
		}
	else if(ptr->lc!=NULL || ptr->rc != NULL)
	{
		if(ptr->lc!=NULL)
			{
				ptr->n=(ptr->lc)->n;
				p=ptr;
				ptr=ptr->lc;
				p->lc=NULL;
			}
		else
			{
				ptr->n=(ptr->rc)->n;
				p=ptr;
				ptr=ptr->rc;
				p->rc=NULL;
			}
			free (ptr);
	}
	else
	{
		p=ptr->rc;
		while(p->lc!=NULL)
			{
				par=p;
				p=p->lc;
			}
		ptr->n=p->n;
		par->lc=NULL;
		free(p);
	}
}

int main()
{
	char ch;
	int di;
	while(1)
	{
		clrscr();
		printf("\n1.insert\n2.preorder display\n3.inorder display\n4.postorder display\n5.delete\n6.exit");
		fflush(stdin);
		scanf("%c",&ch);
		switch(ch)
		{
			case '1' : ins();break;
			case '2' : predisp(r);break;
			case '3' : indisp(r);break;
			case '4' : postdisp(r);break;
			case '5' : del();break;
			case '6' : return 0;
			default : printf("\nW A");
		}
		getch();
	}
}