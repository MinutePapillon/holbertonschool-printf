#include "main.h"
/**
 *
 *
 *
 */
int specif(const char character, va_list args)
{
	int j = 0;

	spec_t specifier[] = {
		{'%', print_percent},
		{'s', print_string},
		{'c', print_char},
		{'\0', NULL},
	};

	while (specifier[j].specifiers)
	{
		if (specifier[j].specifiers = character)
		{
			return (specifier[j].function(args));
		}
		j++;
	}
	return (-1);
}
