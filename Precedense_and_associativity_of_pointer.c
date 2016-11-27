#include<stdio.h>
int main()
{
    int x,*ptr,a[5]={10,20,30,40,50};
    ptr=a;
    x=*ptr++;
    printf("ptr = %x x= %d\n",ptr,x);
    x=*++ptr;
    printf("ptr = %x x= %d\n",ptr,x);
    x=++*ptr;
    printf("ptr = %x x= %d\n",ptr,x);
    return 0;

}
