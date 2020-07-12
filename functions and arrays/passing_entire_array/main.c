#include <stdio.h>
#include <conio.h>
void display(int arr[],int);
int main()
{
    int a[5] = {1,2,3,4,5};
    int length = 5 ;
    display(a,length);
    getch();
    return 0;
}
void display(int arr[],int len)
{
    int i ;
    for(i=0;i<len;i++)
    {
        printf("arr[%d] = %d",i,arr[i]);
        printf("\t");
    }
}
