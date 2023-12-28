#include<stdio.h>
#include<string.h>
int main()
{
    char a[20]="This is";
    char b[20];
    strcpy(b,a);
    puts(a);
    puts(b);
}