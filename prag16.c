// write a program to to find the sum of all elements in an array
#include <stdio.h>

int main()
{
    int a, i, b, c[100];

    printf("Enter the number of elements: ");
    scanf("%d", &a);

    printf("Enter %d elements: ", a);
    for (i = 0; i < a; i++)
        scanf("%d", &c[i]);

    b = 0;
    for (i = 0; i < a; i++)
        b = b + c[i];

    printf("Sum of all elements = %d\n", b);

    return 0;
}