/* pgm to check if number is Armstrong number or not

Example --> 153 -->  1**3 + 5**3 + 3**3 --> 1 + 125 + 27 = 153

Cubes of indivudial digits = number itself
(3 digit numbers only)

*/

#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result = 0;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);


    originalNum = num;


    while (originalNum != 0) {
        remainder = originalNum % 10;        			 // rem get last digit
        result += pow(remainder,3);    //cube added to result
        originalNum /= 10;                  		   // change in original number
    }
    

    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
