#include <stdio.h>
int input_array_size()
{
    int n;
    printf("ENTER THE SIZE OF THE ARRAY:");
    scanf("%d",&n);
    return n;
}
void input_array(int n,int a[n])
{
    printf("ENTER THE %d NUMBERS:",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d,&a[i]");
    }
}
int sum_composite_numbers(int n,int a[n])
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>1)
        {
            for(int j=2;j*j<=a[i];j++)
            {
                if(a[i]%j==0)
                {
                    sum+=a[i];
                    break;
                }
            }
        }
    }
    return sum;
}
void output(int sum)
{
    printf("SUM OF COMPOSITE NUMBERS IS %d",sum);
}
int main()
{
    int n= input_array_size();
    int a[n];
    input_array(n,a);
    int sum = sum_composite_numbers(n,a);
    output(sum);
    return 0;
}