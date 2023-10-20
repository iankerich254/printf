#include "main.h"
/**
 * _printf - selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char *format, ...)
{
	conv_m m[] = {
		{"%s", printf_s},
		{"%c", printf_c},
		{"%%", printf_percent},
		{"%i", printf_i},
		{"%d", printf_d},
	};

	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 6;
		while (j >= 0)
		{
			if (m[j].spec[0] == format[i] && m[j].spec[1] == format[i + 1])
			{
				len += m[j].fp(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
