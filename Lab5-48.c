/*
    1
   12
  123
 1234
12345

Make a loop that will print SPACE till 5-i and then i will print then we can make one more loop than will print 1, 12, ...

*/

#include <stdio.h>

int main()
{
	int i,j,k;
	for (i = 1; i <= 5; i++)
  	{
    for (j = 1; j <= (5 - i); j++)
    {
      printf(" ");
    }
    for (k = 1; k <= i; k++)
    {
      printf("%d", k);
    }

    printf("\n");
  }
}
