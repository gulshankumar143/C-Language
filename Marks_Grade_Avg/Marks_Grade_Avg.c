#include<stdio.h>
int main()
{
    int a,b,c,d,e,Total;
    float avg;
    printf("Enter marks of five subjrcts-\n");
    scanf("\n %d %d %d %d %d",&a,&b,&c,&d,&e);
    Total=a+b+c+d+e;
    avg=Total/5;
    printf("\nTotal Marks is %d",Total);
    printf("\nThe Average of marks %f",avg);
    if(avg>=90 & avg<=100)
    {printf("\nThe Grade is A");}
    else if(avg>=80 & avg<90)
    {printf("\nThe Grade is B");}
    else if(avg>=60 & avg<80)
    {printf("\nThe Grade is C");}
    else if(avg<60)
    {printf("\nThe Grade is D");}
}