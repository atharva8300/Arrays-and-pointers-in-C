#include <stdio.h>
#include <conio.h>
#include "pascalhead.h"
void display(int a[6][6]);
void pascal(int a[6][6]);
int main()
{
    int a[6][6] ={0};
    display(a);
    pascal(a);
    display(a);
    getch();
    return 0;
}
