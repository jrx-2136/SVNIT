#include <stdio.h>

//EARTH TAKES A PERIOD OF REVOLUTION OF 31558150 SECONDS, WRITE A C PROGRAM TO CONVERT THIS INTO NUMBER OF DAY,HOURS AND MINUTE

int main()
{

  int earthSec, days, hours, mins;

  earthSec = 31558150;

  days = earthSec / (24 * 3600);

  earthSec = 31558150 % (24 * 3600);

  hours = earthSec / 3600;

  earthSec = earthSec % 3600;

  mins = earthSec / 60;

  printf(
      "So, 31558150 seconds in days hours and min is %d days %d hours %d mins",
      days, hours, mins);

  return 0;
}
