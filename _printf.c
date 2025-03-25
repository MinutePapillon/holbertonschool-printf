#include "main.h"

/**
 * _printf - function that produces output according to a format 
 * @format: a character string
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{

	if (format == NULL)
		return(-1);
	
	va_list ap;
	int i = 0, counter = 0;

	va_start(ap, format);

	while (format[i] != '\0')
	{
		if (format == '%')
		{
			counter = counter + specifier(format[i + 1], args);
			i += 2;
		}

		else
		{
			_putchar(format[i]);
			i++;
			counter++;
		}
	}
	va_end(ap);
	return(counter);
}
