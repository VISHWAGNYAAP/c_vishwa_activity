#include <stdio.h>

// Function to input three numbers
void input(int *a, int *b, int *c)
{
    printf("ENTER THE NUMBERS TO BE COMPARED:");
    scanf("%d%d%d", a, b, c);
}

// Function to compare three numbers and output the result
void compare(int a, int b, int c, int *largest)
{
    if (a >= b && a >= c)
    {
        *largest = a;
    }
    else if (b >= c)
    {
        *largest = b;
    }
    else
    {
        *largest = c;
    }

    // Output the result
    printf("THE LARGEST AMONG %d, %d, AND %d IS %d", a, b, c, *largest);
}

int main()
{
    int num1, num2, num3;
    int largest;

    // Input only once
    input(&num1, &num2, &num3);

    // Compare and output
    compare(num1, num2, num3, &largest);

    return 0;
}
