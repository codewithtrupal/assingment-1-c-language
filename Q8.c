#include <stdio.h>

int main()
{
    int num, first = 0, second = 1, next;

    printf("Enter the number : ");
    scanf("%d", &num);

    if (num <= 0)
    {
        return 1;
    }
    printf("Fibonacci series :  ");
    for (int i = 1; i <= num; i++)
    {

        if (i == 1)
        {
            printf("\n%d", first);
            continue;
        }
        if (i == 2)
        {
            printf("\n%d", second);
            continue;
        }
        next = first + second;
        printf("\n%d", next);

        first = second;
        second = next;
    }
    printf("\n");
    return 0;
}