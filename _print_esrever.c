#include "main.h"

/**
 * _print_esrever - prints a revese of a string.
 * @the_args : args
 * @count: cout
 * Return: count
 */

int _print_esrever(va_list the_args, int count)
{
	char *s = va_arg(the_args, char *);
	int i, j = 0;

	while (s[j])
	j++;

	for (i = j - 1; i >= 0; i--)
	{
		_putchar(s[i]);
		count++;
	}

	return (count);
}

