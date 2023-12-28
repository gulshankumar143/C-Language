#include<stdio.h>
#include<string.h>
int main()
{
    char a[20]="This is ";
    char b[20]="C Programming";
    strcat(a,b);
    puts(a);
    puts(b);
}