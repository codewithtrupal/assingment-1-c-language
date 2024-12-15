#include <stdio.h>

int main()
{
    int num,r,sum=0,tem;

    printf("Enter the number : ");
    scanf("%d", &num);

    tem = num;

   while (num != 0)
    {
        r = num % 10;
        sum += r * r * r;
        num /= 10;
    }
    
    if (sum == tem)
    {
        printf("This is Armstrong ");
    }
    else
    {
        printf("This isn't Armstrong ");
    }
    
    
}