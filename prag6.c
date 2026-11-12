#include <stdio.h>

int main()
{
    int a, b, c, i;

    printf("Enter a positive integer: ");
    scanf("%d", &a);

    i = a;
    b = 0;
    while (i > 0)
    {
        c = i % 10;
        b = b * 10 + c;
        i = i / 10;
    }

    if (a == b)
        printf("%d is a palindrome.\n", a);
    else
        printf("%d is not a palindrome.\n", a);

    return 0;
}