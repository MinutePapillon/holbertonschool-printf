#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <stddef.h>

/**
 * struct spec - Structure defining a format specifier
 * @s: Character representing the specifier ('c' for char, 's' for string)
 * @f: Pointer to the function that handles this specifier
 */
typedef struct spec
{
	char s;
	int (*f)(va_list);
} spec_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_string(va_list ap);
int print_char(va_list ap);
int specif(const char character, va_list args);

#endif
