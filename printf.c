#include <unistd.h>
#include "holberton.h"

/**
 * printf - This is the string that contains the text to be written
 * to stdout with different types of arguments.
 * @format: the string that shows us what is about to be printed
 * Return: the number of characters successfully printed by the function
 */

int _printf(const char *format, ...);

{
int a, inc;
va_list op_list;
int (*f)(va_list);

if (format == NULL)
return (-1);

va_start(op_list, format);
a = inc = 0;

while (format[a] != '\0')
{
if (format[a] == '%')
{
if (format[a +1] == '\0')
return (-1);
f = get_func(format[a + 1]);
if (f == NULL)
count += print_nan(format[a], format[a + 1]);
else
inc += f(op_list);
a++;
}
else
{
putchar(format[a]);
inc++;
}
va_end(op_list);
return(inc);
}
