#include <stdio.h>

// PROGRAM TO SWAP TOW VARIABLES USING THIRD VARIABL

int main()
{
  int a, b, c;

  printf("Enter a and b So, We can swap it for you \n--->");

  scanf("%d %d", &a, &b);

  printf("Your a is :%d\nYour b is:%d\n\n", a, b);

  c = a;

  a = b;

  b = c;

  printf("swaped a is :%d\nswaped b is:%d", a, b);

  return 0;
}