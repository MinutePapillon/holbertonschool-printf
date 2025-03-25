#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <stddef.h>

typedef struct spec
{
	char s;
	int (*f)(va_list);
}spec_t;

int _printf(const char *format, ...);
int _putchar(char c);
/*int print_percent(void);*/
int print_string(va_list ap);
int print_char(va_list ap);
int specif(const char character, va_list args);

#endif
