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
	int i = va_arg(ap, int), t = 0;
	int j = i;
	int counter1 = 0, counter2 = 0;

	if (i < 0)
	{
		_putchar('-');
		t++;
	}

	while (j > 10)
	{
		j /= 10;
		counter1++;
	}
	counter2 = counter1;

	while (counter2 > 0)
	{
		_putchar((i / (10 * counter2)) + '0');
		counter2--;
		counter1++;
	}
	_putchar((i % 10) + '0');
	return (counter1 + 1 + t);
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

