#include <stdio.h>

int main()
{
    int n, num, max;

    printf("Enter element of number : ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("This incorrect value : ");
    }

    printf("Enter number 1 : ");
    scanf("%d", &num);

    max = num;

    for (int i = 2; i <= n; i++)
    {
        printf("Enter number %d :", i);
        scanf("%d", &num);

        if (num > max)
        {
            max = num;
        }
    }
    printf("This is max number = %d", max);
}