/*
int (*ptr)[10] - declares ptr to be a pointer to an array of 10 integers
int *ptr[10] - declares an array of 10 pointers
they're NOT the same bro :)

TO CONCLUDE :
A 2D array is NOT the same as an array of pointers to 1D arrays .
Actually a 2D array is declared as  int(*ptr)[10]
arr[i][j] = *((*(arr+i))+j) = *(arr[i]+j)=*(arr+i)[j]

The following is a program to read and display a 2D array  (3*3 matrix) using pointers .
*/

#include <stdio.h>
#include <conio.h>
void display(int (*)[3]);
int main()
{
    int i,j,mat[3][3];
    printf("Enter the elements of the matrix : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&mat[i][j]);
            printf("\n");
        }

    }
    display(mat);
    getch();
    return 0;
}
void display(int (*ptr)[3])
{
    printf("the matrix is : \n");
    for(int i = 0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",*(*(ptr+i)+j));
        }
        printf("\n");
    }
}
