#include <stdio.h>
#include <conio.h>
int change_element(int);
int main()
{
    int a[10],n,index,value;
    do
    {
        printf("enter number of elements[<10] : ");
        scanf("%d",&n);
        printf("\n");
    }while(n>10);
    printf("enter elements");
    for(int i = 0 ;i<n;i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
        printf("\n");
    }
    printf("index of the elment which you want to change : ");
    scanf("%d",&index);
    value=change_element(a[index]);
    a[index]=value;
    printf("the new array is :\n");
    for(int i =0 ;i<n;i++)
    {
        printf("a[%d] = %d",i,a[i]);
        printf("\t");
    }
    getch();
    return 0 ;
}
int change_element(int f)
{
    int c;
    printf("og value : %d\n",f);
    printf("enter the new value that will replace the og value : ");
    scanf("%d",&c);
    return c;
}
