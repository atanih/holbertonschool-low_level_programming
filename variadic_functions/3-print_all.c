#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* has_next - Checks if there's a valid format character after position i
* @format: The format string
* @i: Current position
*
* Return: 1 if there's another valid char, 0 otherwise
*/
int has_next(const char *format, int i)
{
int j;

j = i + 1;
while (format[j])
{
if (format[j] == 'c' || format[j] == 'i'
|| format[j] == 'f' || format[j] == 's')
return (1);
j++;
}
return (0);
}

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
char *str;

va_start(args, format);
i = 0;
while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
if (has_next(format, i))
printf(", ");
break;
case 'i':
printf("%d", va_arg(args, int));
if (has_next(format, i))
printf(", ");
break;
case 'f':
printf("%f", va_arg(args, double));
if (has_next(format, i))
printf(", ");
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
if (has_next(format, i))
printf(", ");
break;
}
i++;
}
va_end(args);
printf("\n");
}
