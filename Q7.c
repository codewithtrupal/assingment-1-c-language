#include <stdio.h>

int main()
{
    int number,sum=0,remider;

    printf("Enter the number : ");
    scanf("%d", &number);

    while (number>0)
    {
        remider= number % 10;
        sum += remider;
        number/= 10;
    }
    
    printf("\n This is the sum = %d", sum);
}