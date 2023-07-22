#include "main.h"

/**
 * _print_a_char - prints a character
 * @the_args: the va_list that holds the character to be printed
 * @count: the counter of already printed characters.
 * Return: it adds 1 to count.
 */

int _print_a_char(va_list the_args, int count)
{
	int c = va_arg(the_args, int);

	_putchar(c);
	return (count + 1);
}
