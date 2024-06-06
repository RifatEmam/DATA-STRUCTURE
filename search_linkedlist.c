
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
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
int search(struct Node *head,int value){

int pos=1;
while(head!=NULL){

    if(head->data==value){
        return pos;
    }
    pos++;
    head=head->next;
}

return -1;

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
    struct Node *head;
    head=Linkedlist(a,size);
    printf("\n\n");

    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
        if(head != NULL)
        {
            printf(" -> ");
        }

    }

    printf("-> NULL");

     int value;

     printf("\n\nthe value i am searching : ");
     scanf("%d",&value);


    int position = search(head, value);
    if (position != -1) {
        printf("The position of the value %d in the linked list is: %d\n", value, position);
    } else {
        printf("The value %d is not found in the linked list.\n", value);
    }




    return 0;
}
















