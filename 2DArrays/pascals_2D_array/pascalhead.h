void display(int a[6][6])
{
    for (int i=0;i<6;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}
void pascal(int a[6][6])
{
 for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            a[i][0]=1;
            a[i][i]=1;
            if(i>=2)
            {
                a[i][j]=a[i-1][j-1]+a[i-1][j];
            }
        }
    }
}

