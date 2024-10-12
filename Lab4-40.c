#include <stdio.h>

// PGM TO READ NUMBERS TILL A NEGATIVE NUMBER IS ENTERED AND CALCULATE SUM OF A LIST OF NUMBERS READ.

int main()
{
  int sum = 0, num , i=1;

  while (i != 0)
  {
	printf("Enter a number here. Enter a negative number to stop the loop\n");
    scanf("%d", &num);

    if (num < 0)
    {
      i = 0;
    }
    else
    {
      sum += num;
    }
  }

  printf("Sum of all entered numbers: %d\n", sum);

  return 0;
}
