#include <stdio.h>
#include <string.h>
int main() 
{
    char str1[100], str2[100];
    int i, areEqual = 1;
    printf("ENTER THE FIRST STRING: ");
    scanf("%s", str1);
    printf("ENTER THE SECOND STRING: ");
    scanf("%s", str2);
    for (i = 0; str1[i] != '\0' || str2[i] != '\0'; i++)
      {
        if (str1[i] != str2[i])
        {
            areEqual = 0;
            break;
        }
    }
    if (areEqual)
        printf("THE STRINGS ARE EQUAL.\n");
    else
        printf("THE STRINGS ARE NOT EQUAL.\n");
    return 0;
}