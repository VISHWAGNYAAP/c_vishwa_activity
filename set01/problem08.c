#include <stdio.h>
int input_array_size()
{
    int n;
    printf("ENTER THE NUMBERS TO BE ADDED:");
    scanf("%d",&n);
    return n;
}
void input_array(int n,int a[n])
{
    for(int i=0;i<=n;i++)
    {
        scanf("%d",&a[n]);
    }
}
int sum_n_array(int n,int a[n],int sum)
{
    
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum +=i;
    }
    return sum;
}
void output(int n,int a[n],int sum)
{
    printf("THE SUM IS %d",sum);
}
int main()
{
    int n,result;
    n=input_array_size();
    int a[n]=input_array();
    sum_n_array(n,a[n],sum);
    int sum;
    sum=sum_n_array(n,a[n]);
    output(n,a[n],sum);
    return 0;
}
