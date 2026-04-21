#include <stdio.h>
#include "main.h"

/**
*jack_bauer - prints every minute of the day of Jack Bauer 
*Return: void
*/
  void jack_bauer(void)
  {
  int hour;
  int minute;
  
  hour = 0;
  while (hour < 24)
  {
  minute = 0;
  while (minute < 60)
  {
  printf("%02d:%02d\n", hour, minute);
  minute++;
  }
  hour++;
  }
  }
