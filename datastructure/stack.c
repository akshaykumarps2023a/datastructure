
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;

}*top=NULL;
void main()
{ int ch,c;
    int item;
    do
        {
    printf("1.push\n2.pop\n3.display");

printf("\nenter the choice:\n");
scanf("%d",&ch);
switch(ch)
{
    case 1:printf("Enter the element that you want to insert:");
           scanf("%d",&item);
           push(item);
           break;
    case 2:pop();
           break;
    case 3:display();
           break;
}
  printf("\ndo you want to continue:");
    scanf("%d",&c);
        }
while(c==1);
}
void push(int item)
{
    struct node*newnode=(struct node *)malloc(sizeof (struct node*));
    newnode->data=item;
    if(top==NULL)
    {
        newnode->next=NULL;
        top=newnode;
    }
    else
    {
        newnode->next=top;
        top=newnode;
        printf("node inserted:");
    }
}
void pop()
{
    struct node*temp;
    temp=top;
    top=temp->next;
    free(temp);
}
void display()
{
    struct node*temp;
    temp=top;
    while(temp->next!=NULL)
    {
        printf("%d ->",temp->data);
        temp=temp->next;
    }
    printf("%d ->NULL",temp->data);
}

