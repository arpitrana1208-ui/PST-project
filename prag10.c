// write a c program to calculate factorial of a number
#include <stdio.h>

int main()
{
    int a, i;
    unsigned long long b;

    printf("Enter a non-negative integer: ");
    scanf("%d", &a);

    if (a < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        b = 1;
        for (i = 1; i <= a; i++)
            b = b * i;
        printf("Factorial of %d = %llu\n", a, b);
    }

    return 0;
}