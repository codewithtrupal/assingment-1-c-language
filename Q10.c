#include <stdio.h>

int main()
{
    int odd_sum = 0, eve_sum = 0;

    for (int i = 1; i <= 100; i++)
    {
        odd_sum += (2 * i - 1);
    }

    for (int i = 1; i <= 100; i++)
    {
        eve_sum += 2 * i;
    }

    printf("Sum of 100 odd numbers = %d\n", odd_sum);
    printf("Sum of 100 even numbers = %d", eve_sum);
}
