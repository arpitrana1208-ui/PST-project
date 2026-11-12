// write a program to calculate the square of a number using a function
#include <stdio.h>

int square(int a)
{
    return a * a;
}

int main()
{
    int a, b;

    printf("Enter a number: ");
    scanf("%d", &a);

    b = square(a);

    printf("Square of %d = %d\n", a, b);

    return 0;
}