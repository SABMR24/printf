#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * _printf - user defined printf function
 * @format: a string that contains characters that are to be printed
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list the_args;
	int count = 0, i = 0, j;

	spec__func specFuncs[] = {
		{"c", _print_a_char},
		{"s", _print_a_string},
		{"%", _print_a_percent},
		{NULL, NULL}};
	va_start(the_args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] == '\0')
			return (-1);

		if (format[i] == '%')
		{
			i++;
			for (j = 0; specFuncs[j].spec != NULL; j++)
			{
				while (format[i] == ' ')
					i++;
				if (format[i] == *specFuncs[j].spec)
				{
					count = specFuncs[j].func(the_args, count);
					break;
				}
				else if (format[i] != *specFuncs[j].spec && specFuncs[j + 1].spec == NULL)
				{
					_print_a_percent(the_args, count);
					_putchar(format[i]);
					count += 2;
					break;
				}
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(the_args);
	return (count);
}
