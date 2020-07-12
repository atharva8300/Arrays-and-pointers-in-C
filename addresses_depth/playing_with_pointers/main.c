#include <stdio.h>
#include <conio.h>

int main()
{
    int a[] = {6,3,5,1,2};
    int *p ;
    p = a ;
    printf("%u",a);
    printf("\n%u",&a);
    printf("\n%u",p);
    printf("\n%u",a+1);
    printf("\n%u",&a+1);
    printf("\n%d",*a);
    printf("\n%d",*a+1);
    printf("\n%d",*(a+1));
    getch();
    return 0;
}
/* OUTPUT:
6422280
6422280
6422280
6422284
6422300
6
7
3
*/
