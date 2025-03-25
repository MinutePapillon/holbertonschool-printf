#include "main.h"

/**
 * _printf - function that produces output according to a format 
 * @format: a character string
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, counter = 0;
	va_list ap;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return(-1);

	va_start(ap, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				i += 2;
				counter++;
				continue;
			}
			counter = counter + specif(format[i + 1], ap);
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
