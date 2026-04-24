#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_all - prints anything
* @format: list of types of arguments passed to the function
*
* Description: Prints values according to format specifiers:
* c: char
* i: integer
* f: float
* s: char * (prints (nil) if NULL)
* Any other character is ignored
*/
void print_all(const char * const format, ...)
{
va_list args;
int i, first;
char *str;

va_start(args, format);
i = 0;
first = 0;
while (format && format[i])
{
if ((first != 0) && (format[i] == 'c' || format[i] == 'i'
|| format[i] == 'f' || format[i] == 's'))
printf(", ");
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
first = 1;
break;
case 'i':
printf("%d", va_arg(args, int));
first = 1;
break;
case 'f':
printf("%f", va_arg(args, double));
first = 1;
break;
case 's':
str = va_arg(args, char *);
if (str)
printf("%s", str);
printf("(nil)" + 5 * (str != NULL));
first = 1;
break;
}
i++;
}
va_end(args);
printf("\n");
}
