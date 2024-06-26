#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data ;
    struct Node *next;

};
struct Node *Linkedlist(int arr[],int size)
{
    struct Node *head=NULL,*temp=NULL,*current = NULL;
    int i;
    for(i=0; i<size; i++)
    {
        temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=arr[i];
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
            current=temp;
        }
        else
        {
            current->next=temp;
            current=current->next;

        }

    }
    return head;

}
void reverseLinkedlist(struct Node *newhead)
{

    struct Node *previous=NULL,*current=head,*next=NULL;
    while(current!=NULL)
    {
        next=current->next;
        current->next=previous;
        previous=current;
        current=next;
    }

    head=previous;
    while(head!=NULL)
    {
        printf("%d -> ",current->data);
        current=current->next;


    }
printf("NULL\n");


}


int main()
{
    int size;

    printf("\nEnter an array size : ");
    scanf("%d",&size);
    int a[size];
    printf("\n\nEnter an array elements : ");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
    struct Node *head=NULL;


    head=Linkedlist(a,size);


    struct Node *newhead=head;


    printf("\n\n");
    while(head!=NULL)
    {
        printf("%d -> ",head->data);
        head=head->next;


    }
    printf("NULL\n");



    reverseLinkedlist(newhead);

    return 0;

}
