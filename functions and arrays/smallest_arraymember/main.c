#include <stdio.h>
#include <conio.h>
int smallest(int a[],int len);
int main()
{
    int a[5]= {1,2,3,4,5};
    int length = 5,smallest_num;
    smallest_num = smallest(a,length);
    printf("the smallest number in the array is %d",smallest_num);
    getch();
    return 0;
}
int smallest (int a[],int len)
{
    int i,smallest_num=a[0];
    for(i=0;i<len;i++)
    {
        if(smallest_num > a[i])
        {
            smallest_num = a[i];
        }
    }
    return smallest_num;
}
