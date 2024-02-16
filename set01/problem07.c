#include <stdio.h>
int input_n()
{
    int n;
    printf("ENTER THE VALUE OF N");
    scanf("%d",&n); 
    return n;
}
int sum_n_nos(int n)
{
    int result=0;
    for(int i=1;i<=n;i++)
    {
        result +=i;
    }
    return result;
}
void output(int n,int sum)
{
    printf("THE SUM FROM 1 TO %d IS %d",n,sum);
}
int main()
{
    int n=input_n();
    int total=sum_n_nos(n);
    output(n,total);
    return 0;
}