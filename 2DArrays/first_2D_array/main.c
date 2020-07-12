#include <stdio.h>
#include <conio.h>

int main()
{
    //different ways of initialization and declaration
    int a[2][3] = {1,2,3,4,5,6};
    int b[2][3]={{10,20,30},{40,50,60}};
    int c[2][3]={{100,200,300},
                 {400,500,600}};
    int d[2][3]={0};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
     for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",d[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}
