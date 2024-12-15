#include <stdio.h>

int main()
{
    int start, end;

    printf("Enter the start number : ");
    scanf("%d", &start);

    printf("Enter the end number : ");
    scanf("%d", &end);

    for (int num = start; num <= end; num++)
    {
        printf("\n Multipication of %d : ", num);
        for (int i = 1; i <= 10; i++)
        {
            printf("\n%d x %d = %d", num, i, num * i);
        }
    }
    return 0;
}
