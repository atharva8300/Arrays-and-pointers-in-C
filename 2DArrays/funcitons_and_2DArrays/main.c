#include <stdio.h>
#include <conio.h>
void display_row(int arr[],int );
void display_matrix(int arr[10][10],int ,int);
void accept_array(int arr[10][10],int ,int);
int main()
{
    int n,r,rows,cols,a[10][10];
    printf("enter number of rows and cols [square matrix] : ");
    scanf("%d",&n);
    rows = n;
    cols = n;
    accept_array(a,rows,cols);
    printf("\n");
    display_matrix(a,rows,cols);
    printf("\n");
    printf("which row would you like to see[enter index] : ");
    scanf("%d",&r);
    display_row(a[r],cols);
    getch();
    return 0;
}
void accept_array(int arr[10][10],int rows,int cols)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
            printf("\n");
        }
    }
}
void display_matrix(int arr[10][10],int rows,int cols)
{
   for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            printf("a[%d][%d] = %d\t",i,j,arr[i][j]);
        }
        printf("\n");
    }
}
void display_row(int a[],int cols)
{
    for(int i=0;i<cols;i++)
    {
        printf("%d\t",a[i]);
    }
}




















