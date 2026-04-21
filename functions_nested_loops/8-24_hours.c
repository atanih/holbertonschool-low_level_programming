#include <unistd.h>
#include “main.h”

/**
*jack_bauer - prints every minute of the day of Jack Bauer 
*Return: void
*/
  void jack_bauer(void)
  {
  int hour;
  int minute;
  char time_str[6];
  
  hour = 0;
  while (hour < 24)
  {
  minute = 0;
  while (minute < 60)
  {
  time_str[0] = ‘0’ + (hour / 10);
  time_str[1] = ‘0’ + (hour % 10);
  time_str[2] = ‘:’;
  time_str[3] = ‘0’ + (minute / 10);
  time_str[4] = ‘0’ + (minute % 10);
  write(1, time_str, 5);
  write(1, “\n”, 1);
  minute++;
  }
  hour++;
  }
  }
