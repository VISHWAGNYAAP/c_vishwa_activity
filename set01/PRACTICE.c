#include <stdio.h>
int input(int *a,int *b)
{
    printf("ENTER THE NUMBERS TO BE ADDED:");
    scanf("%d",& *a);
    printf("ENTER THE NUMBERS TO BE ADDED:");
    scanf("%d",& *b);
}
void add(int a,int b,int sum)
{
    *sum = a+b;
}
void