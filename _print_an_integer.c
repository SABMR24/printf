#include "main.h"

/**
 * printf_integer - prints intiger number
 * @args: number arguements
 * @printed: the printed characters
 * Return: printed charcaters
 */

int _print_an_integer(va_list args, int count)
{
    int num = va_arg(args, int);
    int len = 0;
    int num1 = num;

    if (num == 0)
    {
        _putchar('0');
        count++;
        return (count);
    }
    if (num < 0)
    {
        _putchar('-');
        num = -num;
        count++;
    }
    while (num1 != 0)
    {
        num1 /= 10;
        len++;
    }
    while (len > 0)
    {
        int x = 1;
        int i = 1;

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