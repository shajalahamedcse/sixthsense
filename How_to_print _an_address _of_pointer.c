//How to print the address of any variable
#include<stdio.h>

int main()
{
    int id=44;
    float gpa=3.76;
    printf("Address of id is : %x\n",&id);
    printf("Address of gpa is: %x",&gpa);
    return 0;
}
