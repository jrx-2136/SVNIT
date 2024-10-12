// program to print --> 2,4,6,8,.....N


#include <stdio.h>

int main() {
    int N,i;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("Even numbers up to %d are:\n", N);

    for (i = 2; i <= N; i += 2) 
	{
        printf("%d ", i);
    }
    
    printf("\n");

    return 0;
}
