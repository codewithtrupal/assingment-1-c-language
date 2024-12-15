#include <stdio.h>

int main()
{
    int num, isPrime = 1;

    printf("Enter the number : ");
    scanf("%d", &num);

    if (num <= 1)
    {
        isPrime = 0;
    }
    else
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime)
    {
        printf("This is prime");
    }
    else
    {
         printf("This isn't prime");
    }
    
    
}