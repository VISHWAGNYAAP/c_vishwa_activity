#include <stdio.h>
int input()
{
    int a,b;
    printf("ENTER THE VALUE OF FIRST NUMBER TO BE ADDED:");
    scanf("%d",&a);
    printf("ENTER THE VALUE OF THE SECOND NUMBER TO BE ADDED:");
    scanf("%d",&b);
}
int add(int a,int b)
{
    int sum =0;
    return sum;
}
void output(int a,int b ,int sum)
{
    printf("THE SUM OF %d AND %d IS %d",a,b,sum);
}
int main()
{
    int num1,num2,sum;
    num1=input();
    num2=input();
    sum = num1+num2;
    output(num1,num2,sum);
    return 0;
}