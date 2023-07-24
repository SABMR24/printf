#include "main.h"
#include <stdint.h>

int _print_an_integer(va_list the_args, int count)
{
	int number = va_arg(the_args, int);
	int i, len;
	int digits[20];

	if (number == 0)
	{
		_putchar('0');
		count++;
	}

	if (number < 0)
	{
		_putchar('-');
		count++;
		number = -number;
	}

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
