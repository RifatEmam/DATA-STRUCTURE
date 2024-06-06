#include<stdio.h>
#include<conio.h>
int main()
{


    int n;
    int i,j,swap,counter;
    printf("array size are : ");
    scanf("%d",&n);
    int a[n];
    printf("array elements  are : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }



    for(i=0; i<n-1; i++)
    {
        swap=0;
        for(j=0; j<n-1-i; j++)
        {
            counter++;
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swap=1;

            }

        }
        if(swap==0)
        {
            break;
        }
    }
    printf("\nthe sorting array are : ");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i] );
    }
    printf("\n the loop  are counting: %d",counter);

    int value;
    printf("\n which value i am searching : \n");
    scanf("%d",&value);
    int left=0,right=n,middle;

    while(left<=right)
    {
        middle=(left+right)/2;
        if(a[middle]==value)
        {
            printf("the searching position are : %d\n",middle+1);
            return 0;
        }
        else if(a[middle]<value)
        {
            left=middle+1;
        }
        else
        {
            right =middle-1;

        }

    }
    if(middle != value)
    {
        printf("\n%d the value is  not found in array ",value);
    }


    return 0;
}

