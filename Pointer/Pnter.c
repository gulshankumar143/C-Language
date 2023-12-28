#include<stdio.h>
int main()
{
    int x,*p;
    x=25;
    p=&x;
    printf("size of pointer variable is %d",sizeof(p));
}