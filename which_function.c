#include "Holberton.h"
#include <unistd.h>

/**
 * get_which - selects the correct function to use
 * @func: the format in which the intput is set
 *
 * Return: the function that the pointer points to
 */


int (get_which(char func))(va_list)
{
	int i = 0;
	aim_f print_aims[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_num},
		{'i', print_num},
		{'\0', NULL}
	};

	while (print_aim[i].function)
	{
		if (func == print[i].function)
		{
			return (print_aim[i].which);
		}
		i++;
	}

	return (NULL);
 
