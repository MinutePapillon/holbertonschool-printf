#include <stdarg.h>
#include "main.h"
/**
 * print_int - print a int
 * @ap: the list of ap
 *
 * Return: number of character printed
 */
int print_int(va_list ap)
{
	int i = va_arg(ap, int), k = 0, l = 0, t = 0;
	int j = i;
	int counter = 0;

	if (i < 0)
	{
		_putchar('-');
		t++;
	}

	while (j > 10)
	{
		j /= 10;
		counter++;
	}

	while (counter > 0)
	{
		k = i / (10 * counter);
		_putchar(k + '0');
		counter--;
	}
	l = i % 10;
	_putchar(l + '0');
	return (counter + 1 + t);
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

