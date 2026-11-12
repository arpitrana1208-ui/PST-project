#include <stdio.h>
#include <math.h>

int main()
{
    int n = 0;

    printf("Enter the number : ");
    scanf("%d\n", &n);

    int val = n;

    if (n == 0)
    {
        printf("%d", n);
    }

    int len = 0;

    while (n % 10 > 0)
    {
        int x = n % 10;
        n = n / 10;
        printf("%d ", x);
        len++;
    }
    n = val;
    printf("\n");

    int p = 1;
    while (len - 1 > 0)
    {
        p = p * 10;
        len--;
    }

    while (n > 0)
    {

        int x = (int)(n / p);
        n = n % p;
        p = p / 10;

        printf("%d ", x);
    }
    return 0;
}
