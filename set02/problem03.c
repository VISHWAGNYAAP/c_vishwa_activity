#include <stdio.h>
#include <math.h>
int input_number()
{
    int n;
  printf("ENTER THE NUMBER TO BE CHECKED:\n");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
    if (n <= 1) {
        return 0; 
    }
    for (int i = 2; i <= sqrt(n); i++) 
    {
        if (n % i == 0) 
        {
            return 1; 
        }
    }
    return 0;
}
void output(int n,int result)
{
    if(result == 1)
    {
        printf("THE NUMBER NOT COMPOSITE\n");
        scanf("%d",&n);
    }
    if(result == 0)
    {
        printf("THE NUMBER IS NOT COMPOSITE\n");
        scanf("%d",&n);
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
