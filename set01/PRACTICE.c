#include <stdio.h>
int input()
{
    printf("ENTER THE VALUE OF N");
    scanf("%d",&n);
    return n;
}
int sum_n_nos(int n)
{
   int result=0;
   for(int i=0 ;i<=n ; i++)
   {
    result += 1;
   }
   return result;
}
void output(int n,int sum)
{
    printf("THE SUM FROM 1 TO %d IS %d");
}
int main()
{
    int n = input();
    int total = sum_n_nos(n);
    output(n,total);
    return 0;
}