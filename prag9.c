#include <stdio.h>

int main()
{
    int a;

    printf("Enter marks (0-100): ");
    scanf("%d", &a);

    if (a < 0 || a > 100)
        printf("Invalid marks.\n");
    else if (a >= 90)
        printf("Grade: A\n");
    else if (a >= 80)
        printf("Grade: B\n");
    else if (a >= 70)
        printf("Grade: C\n");
    else if (a >= 60)
        printf("Grade: D\n");
    else if (a >= 50)
        printf("Grade: E\n");
    else
        printf("Grade: F\n");

    return 0;
}