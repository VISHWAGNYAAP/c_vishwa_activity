#include <stdio.h>
int input_side()
{
    int n;
    printf("ENTER THE VALUE OF NUMBER:\n");
    scanf("%d",&n);
    return n;
}
int check_scalane(int a,int b,int c)
{
    if(a!=b && b!=c && c!=a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void output(int a,int b, int c, int isscalane)
{
    if(isscalane)
    {
    printf("IT IS A SCALANE TRIANGLE\n");
    }
    else
    {
        printf("IT IS NOT A SCALANE TRIANGLE\n");
    }
}
int main()
{
    int a,b,c,isscalane;
    a=input_side();
    b=input_side();
    c=input_side();
    isscalane=check_scalane(a,b,c);
    output(a,b,c,isscalane);
    return 0;
}