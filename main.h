#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>

typedef struct spec
{
	char *s;
	void (*f)(va_list);
}spec_t;

int _printf(const char *format, ...);
int _putchar(char c);

#endif
