#include <stdio.h>
int input_number()
{
    int n;
  printf("ENTER THE NUMBER TO BE CHECKED:\n");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
    if (n <= 1) 
    {
        return 0; 
    }
    int count = 0;
    for(int i=1;i<=n;i++)
    {
    if(n%i == 0)
    {
    count ++;
    }
}
return count > 2;
}
void output(int n,int result)
{
    if(is_composite(n))
    {
        printf("THE NUMBER IS COMPOSITE\n");
    }
    else
    {
        printf("THE NUMBER IS NOT COMPOSITE\n");
    }
}
int main()
{
    int n,output;
    n=input_number();
    output= is_composite(n);
    output=is_composite(n);
    return 0;
}
