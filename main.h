#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <stddef.h>

int _putchar(char c);
int _printf(const char *format, ...);
int printf_percent(void);
int printf_c(va_list item);
int printf_s(va_list item);
int printf_d(va_list itm);
int printf_i(va_list itm);
int _strlen(char *s);
int _strlenc(const char *s);

/**
 * struct format - it matches conversion specifiers
 * @spec: char pointer to the specifier
 * @fp: function pointer for the conversion specifier
 */
typedef struct format
{
	char *spec;
	int (*fp)();
} conv_m;

#endif
