#include <stdio.h>

int main()
{
    int n, r, rnum = 0;

    printf("Enter the number : ");
    scanf("%d", &n);

    while (n != 0)
    {
        r = n % 10;// give the remainder of input which is last digit of (n).
        n = n / 10;// remove the last digit of input(n)
        rnum = rnum * 10 + r;
         // Append the extracted digit (r) to rnum.
        // Multiply the current rnum by 10 to shift digits left, then add r.
        // For example, if rnum = 43 and r = 2, then rnum = 43 * 10 + 2 = 432.
    }
    printf("Revere number is = %d", rnum);

    return 0;
}
