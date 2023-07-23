#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * _print_a_string - prints a string
 * @the_args: the va_list that holds the string to be printed
 * @count: the counter of already printed characters.
 * Return: it adds 1 to count.
 */


int _print_a_string(va_list the_args, int count)
{
	int i;
	char *str = va_arg(the_args, char *);
	char *nullstr = "(null)";

	if (str == NULL)
	{
		for (i = 0; nullstr[i] != '\0'; i++)
		{
			_putchar(nullstr[i]);
			count++;
		}
	} else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
			count++;
		}
	}

	return (count);

}
