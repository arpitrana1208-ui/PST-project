#include <stdio.h>

int main()
{
    int n = 0, i = 1;
    printf("Enter the number :");
    scanf("%d", &n);
    while (i <= 10)
    {
        int mul = n * i;
        printf("%d X %d = %d\n", n, i, mul);
        i++;
    }
    return 0;
}
