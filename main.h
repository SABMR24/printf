#ifndef _PRINTF_HEADER
#define _PRINTF_HEADER
#include <stdarg.h>

/**
 * struct specs - struct for specifiers
 * @spec: the specifier
 * @func: the function associated
 */

void _puts(char *str);
int _putchar(char c);
int _print_a_char(va_list the_args, int count);
int _print_a_string(va_list the_args, int count);
int _print_a_percent(va_list the_args, int count);

typedef struct specs
{
	char *spec;
	int (*func)(va_list, int);
} spec__func;


int _printf(const char *format, ...);

#endif /* _PRINTF_HEADER */
