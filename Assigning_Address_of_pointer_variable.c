#include<stdio.h>
int main()
{
    int x,*y;
    y=&x;

    scanf("%d",&x);
    printf("Value of y is   : %x\n",y);
    printf("Value of x is   : %d\n",x);
    printf("Address of x is : %x",&x);
    return 0;
}
