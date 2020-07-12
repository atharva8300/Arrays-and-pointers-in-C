#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,n,a[10];
    int smallest,secondsmallest,largest ;

    //scan number of elements
    do
    {
        printf("enter the number of elements[<10]\n");
        scanf("%d",&n);
    }while(n>10);

    //scan elements of the array
    for(i=0;i<n;i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
        printf("\n");
    }

    //first find the smallest
    smallest=a[0];
    for(i=0;i<n;i++)
    {
        if(smallest>a[i])
            smallest=a[i];
    }
    printf("smallest number is %d",smallest);
    //find the largest
    largest=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>largest)
            largest=a[i];
    }
    printf("\nthe largest element is %d",largest);

    //to find second smallest
    secondsmallest = largest ;
    for(i=0;i<n;i++)
    {
        if(secondsmallest>a[i])
        {
            if(a[i]>smallest)
                secondsmallest = a[i];
        }

    }


    printf("\nsecond smallest is %d",secondsmallest);
    getch();
}
