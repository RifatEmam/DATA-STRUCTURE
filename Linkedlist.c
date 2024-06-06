#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node{

int data;
struct Node *next;

};

int main(){
struct Node *a=NULL;
struct Node *b=NULL;
struct Node *c=NULL;

a=(struct Node*)malloc(sizeof(struct Node ));
b=(struct Node*)malloc(sizeof(struct Node ));
c=(struct Node*)malloc(sizeof(struct Node ));

if(a==NULL || b==NULL || c==NULL){
    printf("memory  allocation is failed \n");
    return 1;
}


printf("the value of a : ");
scanf("%d",&a->data);

printf("the value of b : ");
scanf("%d",&b->data);

printf("the value of c : ");
scanf("%d",&c->data);

a->next=b;
b->next=c;
c->next=NULL;
while(a!=NULL){
    printf("%d",a->data);
    a=a->next;
    if(a != NULL){
        printf(" -> ");
    }

}


return 0; }
