#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* check_next - Checks if there's a valid format character after position i
* @format: The format string
* @i: Current position
*
* Return: 1 if valid char found, 0 otherwise
*/
int check_next(const char *format, int i)
{
i++;
while (format[i])
{
if (format[i] == 'c' || format[i] == 'i'
|| format[i] == 'f' || format[i] == 's')
return (1);
i++;
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
if (check_next(format, i))
printf(", ");
break;
case 'i':
printf("%d", va_arg(args, int));
if (check_next(format, i))
printf(", ");
break;
case 'f':
printf("%f", va_arg(args, double));
if (check_next(format, i))
printf(", ");
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (check_next(format, i))
printf(", ");
break;
}
i++;
}
va_end(args);
printf("\n");
}
