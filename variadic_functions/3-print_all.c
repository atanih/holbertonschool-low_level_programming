#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - Prints anything
* @format: A list of types of arguments passed to the function
*
* Return: Nothing
*/
void print_all(const char *format, ...)
{
va_list args;
int i;
int j;
char *str;

va_start(args, format);
i = 0;
while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
str = (str == NULL) ? "(nil)" : str;
printf("%s", str);
break;
}
j = i + 1;
while (format[j] && format[j] != 'c' && format[j] != 'i'
&& format[j] != 'f' && format[j] != 's')
j++;
if (format[j])
printf(", ");
i++;
}
va_end(args);
printf("\n");
}
