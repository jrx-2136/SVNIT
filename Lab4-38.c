// pgm to print --> 1 4 9 16 .. N 
//prefect square numbers

#include <stdio.h>

int main() 
{
    int N,i = 1;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("Perfect squares up to %d are:\n", N);

    while (1) 
	{
        int square = i * i;
        if (square > N) 
		{
            break;
        }
        printf("%d ", square);
        i++;
    }

    printf("\n");

    return 0;
}
