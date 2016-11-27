#include<stdio.h>
int main()
{
    int i,j;
    printf("Enter the value of x and y :\n");
    scanf("%d %d",&i,&j);
    swap(&i,&j);
    printf("%d %d",i,j);
    return 0;
}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
