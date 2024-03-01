#include <stdio.h>
int input(int *a,int *b ,int *c)
{
    printf("ENTER THE NUMBERS TO BE COMPARED:");
    scanf("%d%d%d",a,b,c);
}
int compare(int a,int b,int c,int *largest)
{
if((a>=b)&&(a>=c))
{
    *largest == a;
}
if(b>=c)
{
    *largest == b;
}
else 
{
    *largest == c;
}
return largest;
}
void output(int a,int b,int c,int largest)
{
    printf("THE LARGEST AMONG THE NUMBERS %d,%d,%d IS %d",a,b,c,largest);
}
int main()
{
    int num1,num2,num3,largest;
    input(&num1,num2,&num3);
    largest=compare(num1,num2,num3,&largest);
    output(num1,num2,num3,largest);
    return 0; 
}