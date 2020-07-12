#include <stdio.h>
#include <conio.h>
#define rows 3
#define cols 3
void accept_matrix(int arr[rows][cols]);
//declaration of arr as a multidimensional arr must have bounds for all dimensions except the first
void display_matrix(int arr[rows][cols]);
void multiply(int arr1[rows][cols],int arr2[rows][cols],int res[rows][cols]);
int main()
{
    int a[rows][cols],b[rows][cols],c[rows][cols];
    printf("enter first matrix\n");
    accept_matrix(a);
    display_matrix(a);
    printf("\nenter second matrix\n");
    accept_matrix(b);
    display_matrix(b);
    printf("multiplied matrix is : \n\n");
    multiply(a,b,c);
    display_matrix(c);
    getch();
    return 0;
}
void accept_matrix(int arr[rows][cols])
{
    int i,j;
    static int f = 0 ;
    f++;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("arr%d[%d][%d] = ",f,i,j);
            scanf("%d",&arr[i][j]);
            printf("\n");
        }
    }
}
void display_matrix(int arr[rows][cols])
{
    int i,j;
    static int f2=0;
    f2++;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("arr%d[%d][%d] = %d\t\t",f2,i,j,arr[i][j]);
        }
        printf("\n");
    }
}
void multiply(int arr1[rows][cols],int arr2[rows][cols],int res[rows][cols])
{
    int i,j,k;
    //C[i][j] = summation of A[i][k]*B[k][j];
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            res[i][j]= 0;
            for(k=0;k<rows;k++)
            {
                res[i][j]=res[i][j]+arr1[i][k]*arr2[k][j];
            }
        }
    }
}
