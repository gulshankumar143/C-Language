#include<stdio.h>
int main()
{
    int i,n;
    printf("enter a number");
    scanf("%d",&n);
    while(n>0)
    {
        i=n%10;
    printf("%d",i);
    n=n/10;
    }
}
