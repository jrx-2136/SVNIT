/*

pgm to print fibbonaci series

0 1 1 2 3 ..... (Sum of preceeding 2 numbers = The next term)

*/

#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, c;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else if (n == 1) {
        printf("Fibonacci series: %d\n", a);
    } else {
        printf("Fibonacci series: %d %d", a, b);
        for (i = 2; i < n; i++) {
            next = a + b;
            printf(" %d", next);
            a = b;
            second = next;
        }
        printf("\n");
    }

    return 0;
}
