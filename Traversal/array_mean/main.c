//program to find mean of array elements .
#include <stdio.h>
#include <conio.h>

int main()
{
    int n,i,a[10];
    float mean,sum = 0.0;
    do
    {
        printf("enter number of elements{should be less than 10}\n");
        scanf("%d",&n);
    }while(n>10);
    printf("enter the array elements\n");
    for (i=0;i<n;i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
        printf("\n");

    }

    printf("the array is :\n");
    for (i=0;i<n;i++)
    {
        printf("a[%d] = %d\n",i,a[i]);
    }
    //mean calculation :
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    mean = sum/n ;
    printf("sum = %f\n",sum);
    printf("mean = %f",mean);

    getch();
    return 0;
}
