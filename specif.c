#include "main.h"
/**
 *
 *
 *
 */
int specif(const char character, va_list ap)
{
	int j = 0;

	spec_t specifier[] = {
		{'s', print_string},
		{'c', print_char},
		{'\0', NULL},
	};

	while (specifier[j].s)
	{
		if (specifier[j].s == character)
		{
			return (specifier[j].f(ap));
		}
		j++;
	}
	_putchar('%');
	_putchar(character);
	return (1);
}
