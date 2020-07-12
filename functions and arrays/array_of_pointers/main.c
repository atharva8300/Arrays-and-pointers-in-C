#include <stdio.h>
#include <conio.h>

int main()
{
    int a1[] = {1,2,3,4,5};
    int a2[] = {2,4,6,8,10};
    int a3[] = {3,5,7,9,11};
    int *p[3] = {a1,a2,a3};
    for(int i=0;i<3;i++)
    {
        printf("%d",*(p[i]));
        printf("\n");
    }
    printf("\n");
    // to print all the elements :
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("%d\t",((p[i][j])));
        }
        printf("\n");
    }



    getch();
    return 0;
}
