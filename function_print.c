#include <stdarg.h>
#include "main.h"

/**
 * puissance - return puissance 10
 * @y: exposant
 *
 * Return: return result
 */
int puissance(int y)
{
	int result = 1;

	while (y > 0)
	{
	result = result * 10;
	y--;
	}

	return (result);
}
/**
 * print_int - print a int
 * @ap: the list of ap
 *
 * Return: number of character printed
 */
int print_int(va_list ap)
{
	int i = va_arg(ap, int), t = 0;
	int counter1 = 0;
	int divisor, digit;

	if (i < 0)
	{
		_putchar('-');
		i = -i;
		t++;
	}

	divisor = puissance(counter);

	while (divisor <= i / 10)
	{
		divisor *= 10;
		counter++;
	}

	while (divisor > 0)
	{
		digit = i / divisor;
		_putchar(digit + '0');
		i %= divisor;
		divisor /= 10;
		t++;
	}
	return (t);
}
/**
 * print_char - prints a char
 * @ap: the list of ap
 *
 * Return: number of character printed
 */
int print_char(va_list ap)
{
	char c = va_arg(ap, int);

	_putchar (c);
	return (1);
}
/**
 * print_string - prints a string
 * @ap: the list of ap
 *
 * Return: number of character printed
 */
int print_string(va_list ap)
{
	int i = 0;
	char *s = va_arg(ap, char *);

	if (s == NULL)
	{
		_putchar ('(');
		_putchar ('n');
		_putchar ('u');
		_putchar ('l');
		_putchar ('l');
		_putchar (')');
		return (6);
	}

	while (s[i] != '\0')
	{
		_putchar (s[i]);
		i++;
	}
	return (i);
}

