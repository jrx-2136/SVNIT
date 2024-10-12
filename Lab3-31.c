/*
pgm to print sum of indiviual digital of a N digit no

Ex --> 123 --> 1+2+3 --> 6
*/


#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    num = (num < 0) ? -num : num;

    while (num != 0) {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }

    printf("Sum of the digits is: %d\n", sum);

    return 0;
}

