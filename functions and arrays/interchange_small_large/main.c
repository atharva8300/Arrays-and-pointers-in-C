#include <stdio.h>
#include <conio.h>

void request_array(int *,int len);
void interchange(int *,int len);
int find_smallest(int *,int len);
int find_largest(int *,int len);
void display(int *,int len);
int main()
{
    int a[10];
    int length ;
    do
    {
        printf("enter number of elements[should be less than 10] : ");
        scanf("%d",&length);
    }while(length>10);
    request_array(a,length);
    printf("after interchanging the smallest and the largest elements of the array , the array is: \n");
    interchange(a,length);
    display(a,length);
    getch();
    return 0;
}
void request_array(int *a,int len)
{
    printf("\nenter the elements : \n");
    for(int i =0 ; i<len; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
        printf("\n");
    }
}
void interchange(int *a,int len)
{
    int smallest_index,largest_index,temp;
    smallest_index = find_smallest(a,len);
    largest_index = find_largest(a,len);
    temp = a[smallest_index];
    a[smallest_index] = a[largest_index];
    a[largest_index]= temp ;
}
void display(int *a,int len)
{
    int i;
    for(i=0;i<len;i++)
    {
        printf("%d\t",a[i]);
    }
}

int find_smallest(int *a,int len)
{
    int i,smallest ;
    smallest = a[0];
    for(i = 0;i<len ; i++)
    {
        if(smallest>a[i])
        {
            smallest = a[i];
        }
    }
    for(i=0;i<len;i++)
    {
        if(a[i]==smallest)
        {
            break ;
        }
    }
    return i;
}
int find_largest(int *a,int len)
{
    int i,largest ;
    largest = a[0];
    for(i = 0;i<len ; i++)
    {
        if(largest<a[i])
        {
            largest = a[i];
        }
    }
    for(i=0;i<len;i++)
    {
        if(a[i]==largest)
        {
            break ;
        }
    }
    return i;
}
