#include <stdio.h>

int main()
{
    int a, i, c;

    printf("Enter a positive integer: ");
    scanf("%d", &a);

    c = 0;

    if (a < 2)
    {
        c = 1;
    }
    else
    {
        for (i = 2; i * i <= a; i++)
        {
            if (a % i == 0)
            {
                c = 1;
                break;
            }
        }
    }

    if (c == 0)
        printf("%d is a prime number.\n", a);
    else
        printf("%d is not a prime number.\n", a);

    return 0;
}