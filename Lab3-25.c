#include <stdio.h>

/*
pgm to print multiplication table of any number x upto --> x*15
*/



int main()
{

  int tNo, i = 1, result;

  printf("Enter a Number.\n>>>");
  scanf("%d", &tNo);

  printf("\tTable of %d\n\n", tNo);

  while (i <= 15)
  {
    result = tNo * i;
    printf("\t%d X %d = %d\n", tNo, i, result);
    i++;
  }

  return 0;
}
