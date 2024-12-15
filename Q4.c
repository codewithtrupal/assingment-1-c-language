#include <stdio.h>

int main()
{
    int num, fact = 1;

    printf("Enter the number : ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }

    printf("This is the factorial of number = %d", fact);

    return 0;
}