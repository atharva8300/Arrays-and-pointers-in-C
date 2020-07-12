#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,n,a[10];
    int smallest,largest,second_smallest ;
    int flag = 0 ;
    do
    {
        printf("enter number of elements in the array[should be less than or equal to 10] : ");
        scanf("%d",&n);
    }while(n>10);

    printf("\nenter the elements\n");

    for(i=0;i<n;i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
        printf("\n");
    }

    //find smallest
    smallest=a[0];
    for(i=0;i<n;i++)
    {
        if(smallest>a[i])
        {
            smallest = a[i];
        }
    }
    printf("smallest = %d\n",smallest);

    //find largest
    largest = a[0];
    for(i=0;i<n;i++)
    {
        if(largest<a[i])
        {
            largest=a[i];
        }
    }
    printf("largest = %d",largest);


    //find second smallest
    second_smallest = largest ;
    for(i=0;i<n;i++)
    {
        if(second_smallest>a[i] && a[i]>smallest)
        {
            second_smallest = a[i];
        }
    }
    printf("\nsecond smallest is %d",second_smallest);

    //duplicate check
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i] == a[j] && i!=j)
            {
                printf("\nnumber is repeated at indices : %d and %d",i,j);
                flag = 1;
            }
        }
        if(flag == 1){break ;}
    }

    getch();
    return 0 ;
}
