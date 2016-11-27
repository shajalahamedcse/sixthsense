#include<stdio.h>
int main()
{
    int i,j,k;
    printf("Enter the value of i,j:\n");
    scanf("%d %d",&i,&j);
    funcA(&i,&j,&k);
    printf("%d",k);
    return 0;
}
void funcA(int *x,int *y,int *z)
{
    *z=(*x)*(*y);
}
