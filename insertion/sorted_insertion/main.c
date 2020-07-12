#include <stdio.h>
#include <conio.h>

int main()
{
    int i,n,m,pos,a[20];
    char c = 'y';
    do
    {
        printf("enter the size of the array[<20]\n");
        scanf("%d",&n);
    }while(n>10);

    printf("enter a SORTED array[ascending order]\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
        printf("\n");
    }
    printf("\nyou can add only %d numbers\n",20-n);
    while(c=='y')
    {
        printf("\nenter the number to be added\n");
        scanf("%d",&m);
        for(i=0;i<n;i++)
        {
            if(a[i+1]>m && a[i]<m)
            {
                pos = i+1 ;
                break ;
            }
            if(a[0]>m)
            {
                pos = 0;
                break ;
            }
            if(a[n-1]<m)
            {
                pos = n-1 ;
            }
        }

        for(i=n-1;i>=pos;i--)
        {
            a[i+1]=a[i];
        }
        a[pos] = m;
        n++;
        for(i=0;i<n;i++)
        {
            printf("a[%d] = %d",i,a[i]);
            printf("\n");
        }
        printf("\ndo you want to insert more(y/n)");
        scanf(" %c",&c);
    }

    getch();

}
