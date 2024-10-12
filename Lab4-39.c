// program to print 1/1! + 2/2! + 3/3! + ........ + N/N!



#include <stdio.h>

int main() 
{
    int N,i;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("\nThe series is:\t");

    for (i = 1; i <= N; i++) 
	{
     printf("%d/%d!", i, i);

        if (i < N) 
		{
            printf(" + ");
        }
    }

    printf("\n");

    return 0;
}
