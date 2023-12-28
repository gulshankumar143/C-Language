#include<stdio.h>
#include<string.h>
int main()
{
    char a[20]="This is";
    char b[20]="This is";
    strcmp(a,b);
    int i;
    i=strcmp(a,b);
    if(i==0)
    {
        printf("Both strings are equal");
    }
    else
    {
printf("Strings are not equal");
    }
}