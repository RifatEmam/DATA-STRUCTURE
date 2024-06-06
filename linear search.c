#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    int n;
    printf("the array size n are : ");

    scanf("%d",&n);

    int num[n];

    printf("the array element are :");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
    int value;
    int pos=-1;

    printf("the value i am searching : ");
    scanf("%d",&value);

    for(int i=0; i<n; i++)
    {
        if(value==num[i])
        {
            pos=i+1;
            break;

        }
    }



    if(pos!=-1)
    {
        printf("the position of array is %d",pos);

    }
    else
    {
        printf("the value cannot found");

    }






    return 0;
}
