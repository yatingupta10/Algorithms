#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *left;
    struct node *right;
}*par=NULL,*root=NULL,*ptr=NULL,*newnode=NULL;

void inorder(struct node *ptr){
    if(ptr==NULL)
        return;
    else{
        inorder(ptr->left);
        printf("%d ,",ptr->info);
        inorder(ptr->right);
    }
}
void preorder(struct node *ptr){
    if(ptr==NULL)
        return;
    else{
        printf("%d ,",ptr->info);
        preorder(ptr->left);
        preorder(ptr->right);
    }
}
void postorder(struct node *ptr){
    if(ptr==NULL)
        return;
    else{
        postorder(ptr->left);
        postorder(ptr->right);
        printf("%d ,",ptr->info);
    }
}
void instree()
{
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("\nenter the element: ");
        scanf("%d",&newnode->info);
        newnode->left=newnode->right=NULL;
        ptr=root;
        if(ptr==NULL)
        root=newnode;
        else{
            par=NULL;
            while(ptr!=NULL)
            {
                if(ptr->info>newnode->info){
                    par=ptr;
                    ptr=ptr->left;
                }
                else{
                    par=ptr;
                    ptr=ptr->right;
                }
            }
            if(par->info>newnode->info)
            par->left=newnode;
            else if(par->info<newnode->info)
            par->right=newnode;
        }

}
void main()
{
    int ch;
    while(1){
        printf("\n1.insert\n2.inorder\n3.postorder\n4.preorder\n5.exit\n");
        scanf("%d",&ch);
        switch(ch){
            case 1: instree();
                break;
            case 2: inorder(root);
                break;
            case 3: postorder(root);
                break;
            case 4: preorder(root);
                break;
            case 5: exit(0);
        }
    }
}
