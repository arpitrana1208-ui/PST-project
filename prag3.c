#include <stdio.h>

int main()
{
    int n = 0;
    printf("Enter the number :");
    scanf("%d", &n);

    int i = 0, a = 0, b = 1;

    if (n <= 1)
    {
        printf("%d", a);
        return 0;
    }

    while (i <= n - 1)
    {
        int sum = a + b;
        a = b;
        b = sum;
        i++;
    }
    printf("%d", b);
    return 0;
}
