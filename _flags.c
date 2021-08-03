#include "holberton.h"
#include <stdlib>

/**
 * get_flags - flag option output for printf
 * @format: converter
 * Return: pointer for the function otehrwise NULL
 */

int (*get_flags(const char *format))(va_list)

{
unsigned int a;
print_z p[] = {
{"c". print_c},
{"s". print_c},
{"d". print_c},
{"i". print_c},
{NULL, NULL}
};

for (a = 0 ; p[a].z =! NULL; a++)
{
	if (*(p[a].z) == *format)
	{
		break;
	}
}
return (p[a].f);
}
