#include <stdio.h>
int input(int *a,int *b)
{
    printf("ENTER THE NUMBERS TO BE ADDED:");
    scanf("%d",& *a);
    printf("ENTER THE NUMBERS TO BE ADDED:");
    scanf("%d",& *b);
}
void add(int a,int b,int *sum)
{
    *sum = a+b;
}
void output(int a,int b, int sum)
{
    printf("THE SUM OF THE NUMBERS %d AND %d IS %d",a,b,sum);
}
int main()
{
    int a,b,sum;
    input(&a,&b);
    add(a,b,&sum);
    output(a,b,sum);
    return 0;
}