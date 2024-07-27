#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define CAPACITY 5

int q[CAPACITY];
int front=0,rear=-1,total=0;
bool isFull()
{
    if(total==CAPACITY)
    {
        return true;

    }
    return false;
}
bool isEmpty()
{
    if(total==0)
    {
        return true;

    }
    return false;
}
void enqueue(int x)
{

    if(isFull())
    {
        printf("sorry,the queue is full \n");
        return -1;

    }
    else
    {
        rear=(rear+1)%CAPACITY;
        q[rear]=x;

        total++;

    }


}
int dequeue()
{

    if(isEmpty())
    {
        printf("sorry,the queue is Empty \n");
        return -1;

    }
    else
    {
        int frontitem=q[front];
        front =(front+1)%CAPACITY;


        total--;
        return frontitem;

    }


}

void printQueue()
{

    int i;
    printf("QUEUE : ");
    for(i=0; i<CAPACITY; i++)
    {
        printf("%d ",q[i]);
    }
    printf("\n\n");
}



int main()
{

    printf("IMPLEMENT OUR QUEUE : \n");
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    printQueue();
    enqueue(50);
    enqueue(70);

    printQueue();
    printf("the dequeue value is : %d\n",dequeue());
    enqueue(60);
    printQueue();



    return 0;
}
