#include <stdio.h>
#include <conio.h>

void main()
{
    int a[10],b[10],c[20];
    int len_a,len_b,len_c,index_a=0,index_b=0,index_c=0;
    do
    {
        printf("enter number of elements in the first array[less than 10] : ");
        scanf("%d",&len_a);
        printf("\nenter number of elements in the second array[less than 10] : ");
        scanf("%d",&len_b);
    }while(len_a >10 || len_b >10);
    printf("enter elements of first array in ascending order \n");
    for(int i = 0;i<len_a;i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
        printf("\n");
    }
    printf("\n");
    printf("enter elements of second array in ascending order \n");
    for(int i = 0;i<len_b;i++)
    {
        printf("b[%d] = ",i);
        scanf("%d",&b[i]);
        printf("\n");
    }
    len_c = len_a + len_b ;
    while(index_c < len_c)
    {
        if(a[index_a] <= b[index_b])
        {
            c[index_c] = a[index_a];
            index_a ++ ;
        }
        else
        {
            c[index_c] = b[index_b];
            index_b ++ ;
        }
        index_c ++ ;
    }
    printf("\nthe sorted merged array is : \n");
    for(int i = 0 ; i < len_c ; i++)
    {
        printf("c[%d] = %d\t",i,c[i]);
    }
    getch();
}
