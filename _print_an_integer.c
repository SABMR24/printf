#include "main.h"

/**
 * _print_an_integer - prints intiger number
 * @args: number arguements
 * @count: the count
 * Return: count of printed charcaters
 */

int _print_an_integer(va_list args, int count)
{
	int num = va_arg(args, int);
	int len = 0, num1 = num;

	if (num == 0)
	{
		_putchar('0');
		count++;
		return (count); }
	if (num < 0)
	{
		_putchar('-');
		num = -num;
		count++;
	}
	if (num == -2147483648)
	{
		_puts("2147483648");
		count += 10;
		return (count);
	}
	while (num1 != 0)
	{
		num1 /= 10;
		len++;
	}
	while (len > 0)
	{
		int x = 1, i = 1;
		
		while (i < len)
		{
			x *= 10;
			i++;
		}
		_putchar(num / x + '0');
		count++;
		num %= x;
		len--;
	}
	return (count);
}

```
