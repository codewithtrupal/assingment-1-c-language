#include <stdio.h>

int main()
{
    int num1, num2, a, b, gcd, lcm;

    printf("Enter a number : ");
    scanf("%d%d", &num1, &num2);

    a = num1;
    b = num2;

    while (b != 0)
    {
        int tem = b;
        b = a % b;
        a = tem;
    }
    gcd = a;

    lcm = (num1 * num2) / gcd;

    printf("GCd of %d and %d = %d\n", num1, num2, gcd);
    printf("lcm of %d and %d = %d", num1, num2, lcm);

    return 0;
}