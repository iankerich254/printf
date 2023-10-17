#include "main.h"
/**
 * _printf - the printf function
 * @format: character string
 * Return: number of characters printed
 */
int _printf(const char *format)
{
	va_list args;

	va_start(args, format);
	int char_counter = 0;

	for (int i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
			{
				break;
			}
			if (format[i] == 'c')
			{
				/* Print a character */
				char c = va_arg(args, int);

				/* char is promoted to int */
				_putchar(c);
				char_counter++;
			}
			else if (format[i] == 's')
			{
				/* Prints a string */
				char *str = va_arg(args, char *);

				while (*str)
				{
					_putchar(*str);
					str++;
					char_counter++;
				}
			}
			else if (format[i] == '%')
			{
				/* Prints a percent symbol */
				_putchar('%');
				char_counter++;
			}
		}
		else
		{
			/* Regular character to be printed */
			_putchar(format[i]);
			char_counter++;
		}
	}
	va_end(args);
	return (char_counter);
}
