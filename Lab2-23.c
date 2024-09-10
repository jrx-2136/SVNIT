#include <stdio.h>

//PROGRAM TO READ TWO NOS. AND CALCULATE POWER WITHOUT USING HEADER FILE(<MATH.H>)

int main()
{

  int exponent;
  float base, result = 1;

  printf("Enter you base first and then exponent:\n>>>");

  scanf("%f %d", &base, &exponent);

  for (int i = 1; i <= exponent; i++)
  {
    result *= base;
  }

  printf("%f", result);
}
