#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node*head=NULL;
void print()
{
    struct node *ptr=head;
    if(head==NULL)
    {
        printf("underflow...");
    }
    else
    {
        while(ptr!=NULL)
        {
            printf(" %d ",ptr->data);
            ptr=ptr->next;
        }
    }
    printf("\n");
}
void insertEnd(int val)
{
    struct node*ptr=head;
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->data=val;
    temp->next=NULL;

    if(head==NULL)
    {
        head=temp;
        return;
    }
    while(ptr->next!=NULL)
        ptr=ptr->next;
    ptr->next=temp;
    return;

} 
void deleteEnd()
{
    struct node*ptr;
    struct node*prev;

    if(head==NULL)
       printf("already empty");
    else if(head->next==NULL)
    {
        head=NULL;
        free(head);
    }
    else
    {
        ptr=head;
        while(ptr->next!=NULL)
        {
            prev=ptr;
            ptr=ptr->next;
        }
        prev->next=NULL;
        free(ptr);
    }
}
int main()
{
    int a;
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    insertEnd(50);
    insertEnd(60);
    print(a);
    deleteEnd();
    deleteEnd();
    deleteEnd();
    print(a);

}