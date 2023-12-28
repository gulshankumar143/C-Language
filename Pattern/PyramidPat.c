#include<stdio.h>
int main() {
    int i,j,k,s=1;
    for(i=4;i>=1;i--)
    {
        for(j=1;j<=(i-1);j++)
        {
            printf(" ");
        }
        for(k=1;k<=s;k++)
        {
        printf("*");
    }
    s=s+2;
    printf("\n");
    }
    return 0;
}