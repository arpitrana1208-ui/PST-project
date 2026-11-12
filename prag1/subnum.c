#include <stdio.h>

int main()
{
    int num1 = 0, num2 = 0, sub = 0;
    printf("Enter number u wanna subtract :");
    scanf("%d \n %d", &num1, &num2);
    sub = num1 - num2;
    printf("YOUR VALUE IS : %d\n", sub);
    return 0;
}