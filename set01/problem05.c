#include <stdio.h>
int input()
{
    int a,b,c;
    printf("ENTER THE NUMBERS TO BE COMAPRED:");
    scanf("%d%d%d",&a,&b,&c);
    return 0;
}
int compare(int a,int b,int c)
{
    int largest;
    if((a>=b)&&(a>=c))
    {
        largest>=a;
    }
    if(b>>c)
    {
        largest==b;
    }
    else
    {
        largest>=c;
    }
}    
void output(int a,int b,int c,int largest)
{
    printf("THE LARGEST AMONG %d ,%d AND %d IS %d",a,b,c,largest);
}
int main()
{
    int num1,num2,num3,largest;
    num1=input();
    num2=input();
    num3=input();
    compare(num1,num2,num3);
    output(num1,num2,num3,largest);
    return 0;
}
