#include <stdio.h>
void input(int *a, int *b, int *c)
{
    printf("ENTER THE NUMBERS TO BE COMPARED:");
    scanf("%d%d%d", a, b, c);
}
void compare(int a, int b, int c, int *largest)
{
    if (a >= b && a >= c)
    {
        *largest = a;
    }
    else if (b >= c)
    {
        *largest = b;
    }
    else
    {
        *largest = c;
    } 
}
void output(int a,int b,int c,int largest)
{
    printf("THE LARGEST AMONG %d, %d, AND %d IS %d", a, b, c, largest);
}
int main()
{
    int num1, num2, num3;
    int largest;
    input(&num1, &num2, &num3);
    compare(num1, num2, num3, &largest);
    return 0;
}
