#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,a[10];
    int smallest ;
    do
    {
        printf("enter number of elements[should be less than 10]: ");
        scanf("%d",&n);
    }while(n>10);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
        printf("\n");
    }
    //to find the smallest :
    smallest = a[0];
    for(i=0;i<n;i++)
    {
        if(smallest>a[i])
            smallest = a[i] ;
    }
    printf("\n%d",smallest);
    getch();
    return 0;
}
