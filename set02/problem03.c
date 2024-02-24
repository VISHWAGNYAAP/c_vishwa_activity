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
    int count;
    int result=0;
if(n<=1)
{
   return result;
}
for (int i=2; i < n; i < count; i++)
{
   count++;
}

{
    result == 0;
}
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
    n=input();
    is_composite(n);
    output=is_Composite(n);
    return output;
}
