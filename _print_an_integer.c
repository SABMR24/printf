#include "main.h"
#include <stdint.h>

/**
 * _print_an_integer - prints an integer
 * @the_args: the va_list that holds the integer to be printed
 * @count: the counter of already printed characters.
 * Return: it adds the number of printed characters to count.
 */

int _print_an_integer(va_list the_args, int count)
{
	int number = va_arg(the_args, int);
	int i, len;
	int digits[20];

    if (!number)
    {
        _puts("0");
        return (1);
    }

	if (number == -2147483648)
	{
		_puts("-2147483648");
		return (11);
    }

	if (number == 0)
	{
		_putchar('0');
		count++; }

	if (number < 0)
	{
		_putchar('-');
		count++;
		number = -number; }

	if (number > 0)
	{
		for (len = 0; number != 0; len++)
		{
			digits[len] = number % 10;
			number = number / 10;
		}

		for (i = len - 1; i >= 0; i--)
		{
			if (digits[i] == 0)
				continue;
			else
			{
				_putchar(digits[i] + '0');
				count++;
			}
		}
	}
	return (count);
}
