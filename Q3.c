#include <stdio.h>

int main ()
{
    int num,sum=0;

    printf("enter the number : ");
    scanf("%d", &num);

    for(int i=0; i<=num; i++)
    {
        sum +=i;
    }

    printf("This is sum of n = %d", sum);
}