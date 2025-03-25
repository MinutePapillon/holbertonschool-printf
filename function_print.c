#include <stdarg.h>
#include "main.h"
/**
 * print_char - prints a char
 * @ap: the list of ap
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

