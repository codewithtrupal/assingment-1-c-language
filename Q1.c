// this is table of given number

#include <stdio.h>

int main()

{
    int num, res = 1;

    printf("Enter the number : ");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++)
    {
        res = num * i;
        printf("%d\n", res);
    }

    return 0;
}