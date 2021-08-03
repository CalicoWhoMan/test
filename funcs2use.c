#include "holberton.h"

/**
 * function that prints a char to stdout -c
 *
 *
 *
 *
 *
 */

int put_char(


/**
 * function that prints a string of characters/incrementing one at a time - s
 *
 *
 *
 *
 *
 *
 */








 /**
  * print_nan - (nan means "not a number") prints a character
  * after the % which is nan
  * @first: this will always be the % sign
  * @second: This will always be a char
  * Return: If the second char is a % then 1 else if the first char is a char then 2
  */

int print_nan(char first, char second)

{
	if (second == '%')
	{
		write(1, &second, 1);
		return (1);
	}
	else
	{
		write(1, &first, 1);
		write(1, &second, 1);
		return (2);
	}	


}

___________________________________________________________________________________________________________________________

NUMBER 1

(function that prints a signed decimal integer - d and i)

/**
 *
 *
 *
 *
 */	

 int print_doi(va_list list)
{
	
