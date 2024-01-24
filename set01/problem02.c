//2. Write a C program to add two numbers.
#include <stdio.h>
int main()
{
    int a,b,sum;
    printf("ENTER THE FIRST NUMBER TO BE ADDED:",a);
    scanf("%d",&a);
    printf("ENTER THE SECOND NUMBER TO BE ADDED:",b);
    scanf("%d",&b);
    sum=a+b;
    printf("THE SUM OF %d AND %d IS %d",a,b,sum);
    scanf("%d",&sum);
    return sum;
}
