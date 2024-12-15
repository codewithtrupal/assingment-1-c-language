#include <stdio.h>

int main()
{
    int num, rnum = 0, tem, r;

    printf("Enter the number : ");
    scanf("%d", &num);

    tem = num;

    while (num != 0)
    {
        r = num % 10;
        num = num / 10;
        rnum = rnum * 10 + r;
    }

    if (rnum == tem)
    {
        printf("This is Palindrome number.");
    }
    else
    {
        printf("This isn't Palindrome number.");
    }
}