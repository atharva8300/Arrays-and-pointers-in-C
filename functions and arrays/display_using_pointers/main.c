#include <stdio.h>
#include <conio.h>

int main()
{
    int a[]={1,2,3,4,5,6,7,8,9};
    int *ptr1,*ptr2;
    ptr1 = a;
    ptr2 = &a[8];
    while(ptr1 <= ptr2)
    {
        printf("%d\t",*ptr1);
        ptr1++;
    }
    getch();
    return 0;
}
