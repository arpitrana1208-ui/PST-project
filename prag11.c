// check if a given positive integer numberarmstrong or not
#include <stdio.h>

int main()
{
    int a, b, c, d, e, i, j;

    printf("Enter a positive integer: ");
    scanf("%d", &a);

    i = a;
    c = 0;

    while (i > 0)
    {
        c++;
        i = i / 10;
    }

    i = a;
    b = 0;

    while (i > 0)
    {
        d = i % 10;
        e = 1;
        for (j = 0; j < c; j++)
            e = e * d;
        b = b + e;
        i = i / 10;
    }

    if (a == b)
        printf("%d is an Armstrong number.\n", a);
    else
        printf("%d is not an Armstrong number.\n", a);

    return 0;
}