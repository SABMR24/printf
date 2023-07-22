#include "main.h"

/**
 * _print_a_percent - prints a percent
 * @the_args: the va_list that holds the percent to be printed
 * @count: the counter of already printed characters.
 * Return: it adds 1 to count.
 */

int _print_a_percent(va_list the_args, int count)
{
	(void)the_args; /* (void) the_args to To prevent the
	* compiler from warning you
	* about the unused parameter
	*/

	_putchar('%');
	return (count + 1);
}
