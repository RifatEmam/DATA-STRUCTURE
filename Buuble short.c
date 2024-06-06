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
    printf("the sorting array are : ");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i] );
    }
    printf("\nthe loop  are counting: %d",counter);



    return 0;
}
