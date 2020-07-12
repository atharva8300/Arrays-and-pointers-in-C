#include <stdio.h>
#include <conio.h>
int main()
{
    int i,n,pos,a[20];
    char c = 'y';
    do
    {
        printf("enter the size of the array[<20]\n");
        scanf("%d",&n);
    }while(n>10);

    printf("enter a sorted array[ascending order]\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
        printf("\n");
    }
    printf("\nyou can delete only %d numbers\n",n);
    while(c=='y')
    {
        printf("enter index of the number to be deleted ");
        scanf("%d",&pos);
        for(i=pos;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
        n--;
        for(i=0;i<n;i++)
        {
            printf("a[%d] = %d",i,a[i]);
            printf("\n");
        }
        printf("\ndo you want to delete more(y/n)");
        scanf(" %c",&c);
    }
    getch();
    return 0;
}
