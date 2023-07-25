```c
#include "main.h"
#include <stdint.h>

int _absol(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}


int cntdigits(int n)
{
	int cntdigits = 0;
	
	while (n != 0)
	{
		n /= 10;
		cntdigits++;
	}
	return (cntdigits);
}

int _pow(int x, int y)
{
	int i, result = 1;
	
	for (i = 0; i < y; i++)
		result *= x;
	return (result);
}


int _print_an_integer(va_list the_args, int count)
{
	int num = va_arg(the_args, int);
	int cntdig = cntdigits(num);
	int i, e, f;
	
	if (num < 0)
	{
		_putchar('-');
		count++;
		num = _absol(num);
	}
	if (num == 0)
	{
		_putchar('0');
		count++;
	}
	if (num == -2147483648)
	{
		_putchar('2');
		_putchar('1');
		_putchar('4');
		_putchar('7');
		_putchar('4');
		_putchar('8');
		_putchar('3');
		_putchar('6');
		_putchar('4');
		_putchar('8');
		count += 10;
	}
	if (num > 0)
	{
		for (i = cntdig - 1; i >= 0; i--)
		{
			e = num / _pow(10, i);
			f = e % 10;
			_putchar(f + '0');
			count++;
		}
	}
	return (count);
}
