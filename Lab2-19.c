#include<stdio.h>

//PROGRAM TO READ A CHARACTER AND CHECK WHETHER IT IS A SMALL CASE LETTER OR NOT USING CONDATIONAL OPERATOR.


int main(){
  char character;
  int asciiValue;
 


  printf("Enter your character here:\n>>>");
  scanf("%c", &character);


  asciiValue = character;


  (asciiValue >= 97 && asciiValue <= 122 ) ? printf("Yes, It's small case") : printf("No, It's Not small case");
}
