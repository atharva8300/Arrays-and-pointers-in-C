#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,a[20],index,num;
    char ch ;
    do
    {
        printf("enter number of elements[<=20] ");
        scanf("%d",&n);
    }while(n>20);

    for(i=0;i<n;i++)
    {
        printf("\na[%d] = ",i);
        scanf("%d",&a[i]);
        printf("\n");
    }
    ch = 'y';
    while(n<=20 && ch == 'y')
    {
        printf("\nenter number and index ");
        scanf("%d %d",&num,&index);
        for(i=n-1;i>=index;i--)
        {
            a[i+1]=a[i];

        }
        n++;
        a[index]=num;
        for(i=0;i<n;i++)
        {
            printf("a[%d] = %d\n",i,a[i]);
        }
        printf("do you want to insert more numbers(y/n) : ");
        scanf(" %c",&ch);
        //remember to put a single space before %c in scanf because when no space is given it reads the enter key as its input
        printf("%c",ch);

    }

    getch();
    return 0;
}
