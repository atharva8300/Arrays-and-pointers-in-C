#include <stdio.h>
#include <conio.h>

void main()
{
    int a[10],b[10],c[20];
    int len_a,len_b,len_c,index3=0;
    do
    {
        printf("enter number of elements in the first array[less than 10] : ");
        scanf("%d",&len_a);
        printf("\nenter number of elements in the second array[less than 10] : ");
        scanf("%d",&len_b);
    }while(len_a >10 || len_b >10);
    printf("enter elements of first array \n");
    for(int i = 0;i<len_a;i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
        printf("\n");
    }
    printf("\n");
    printf("enter elements of second array \n");
    for(int i = 0;i<len_b;i++)
    {
        printf("b[%d] = ",i);
        scanf("%d",&b[i]);
        printf("\n");
    }
    len_c = len_a + len_b;
    for(int i = 0 ; i<len_a ; i++)
    {
        c[index3]=a[i];
        index3 ++;
    }
    for(int i = 0 ; i<len_b ; i++)
    {
        c[index3]=b[i];
        index3++;
    }
    printf("the merged array is : ");
    printf("\n");
    for(int i = 0 ;i<len_c ; i++)
    {
        printf("c[%d] = %d\n",i,c[i]);
    }
    getch();
}
