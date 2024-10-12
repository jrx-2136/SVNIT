#include <stdio.h>

//PGM TO READ A NUMBER N AND PRINT FACTOR OF N (EXAMPLE 28 --> 1,2,4,7,14,28)

int main()
{
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("\nFactors of %d: ", num);
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf(" %d ", i);
        }
    }
    return 0;
}
