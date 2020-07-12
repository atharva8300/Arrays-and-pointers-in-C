#include <stdio.h>
#include <conio.h>

int main()
{
    int a[2][2][2];
    int i,j,k;
    int (*ptr)[2][2];
    ptr = a ;
    printf("enter the elements of a 2*2*2 array :\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
                scanf("%d",&a[i][j][k]);// in place of &a[i][j][k] one can write (*(*(ptr+i)+j)+k) or (*(*(a+i)+j)+k)
            }
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
                printf("%d",*(*(*(ptr+i)+j)+k));//one can use "a" in place of "ptr"
            }
        }
    }
    getch();
    return 0;
}
