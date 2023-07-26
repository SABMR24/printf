#include "main.h"

/**
 * _print_ROT13 - prints string in rot13
 * @args: string to print
 * @count: the count
 * Return: count of printed charcaters
 */

int _print_ROT13(va_list args, int count)
{
	int i, j;
	char *str = va_arg(args, char *);
	char *normalalphs = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13alphs = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; normalalphs[j] != '\0'; j++)
		{
			if (str[i] == normalalphs[j])
			{
				_putchar(rot13alphs[j]);
				count++;
				break;
			}
		}
		if (!normalalphs[j])
		{
			_putchar(str[i]);
			count++;
		}
	}
	return (count);
}
