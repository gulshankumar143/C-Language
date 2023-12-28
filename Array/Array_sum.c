# include<stdio.h>
int main()
{int i,a[10],b[10],sum[10];
printf("Enter first array\n");
for(i=0;i<10;i++)
{
    printf("a[%d]=",i);
    scanf("%d",&a[i]);
    }
    printf("Enter second array\n");
    for(i=0;i<10;i++)
    {
        printf("b[%d]=",i);
        scanf("%d",&b[i]);
    }
    for(i=0;i<10;i++)
    {
        sum[i]=a[i]+b[i];
    }
    printf("Sum of corresponding arrays");
    for(i=0;i<10;i++)
    {
        printf("\nsum[%d]=[%d]",i,sum[i]);
    }}
