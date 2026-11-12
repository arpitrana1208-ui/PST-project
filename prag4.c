#include <stdio.h>

int main()
{
    int age = 0;
    printf("Enter the number :");
    scanf("%d", &age);
    if (age < 18)
    {
        printf("Not eligible to vote");
    }
    else
    {
        printf("Eligible to vote");
    }
    return 0;
}
