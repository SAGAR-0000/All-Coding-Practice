#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* nextptr;
} *stnode;

void createNode(int n)
{
    struct node *fnNode, *tmp;
    int num,i;
    stnode= (struct node *)malloc(sizeof(struct node));
    if(stnode==NULL)
    {
        printf("Memory Full");
    }
    else{
        printf("Enter Data:");
        scanf("%d",&num);
        stnode->data=num;
        stnode->nextptr=NULL;
        tmp=stnode;
        for(i=2;i<=n;i++)
        {
            fnNode=(struct node *)malloc(sizeof(struct node));
            if(fnNode==NULL)
            {
                printf("Memory Full");
                break;
            }
            else{
                printf("Enter Data:");
                scanf("%d",&num);
                fnNode->data=num;
                fnNode->nextptr=NULL;
                tmp->nextptr=fnNode;
                tmp=tmp->nextptr;
            }
        }

    }
}
int main()
{
    int n;
    printf("Enter Number of nodes: ");
    scanf("%d",&n);
    createNode(n);   
}