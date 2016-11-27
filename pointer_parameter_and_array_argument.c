#include<stdio.h>
int main()
{
    int shajal[5]={10,20,30,40,50};
    func(shajal,5);
    return 0;
}
void func(int *p,int a)
{
    int i,sum=0;
    for(i=0;i<a;i++)
    {
        sum+=*(p+i);
    }
    printf("Sum :%d",sum);
}
