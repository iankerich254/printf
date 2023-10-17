#include "main.h"
/**
 * printf_s - prints a string.
 * @item: argument.
 * Return: the length of the string.
 */
int printf_s(va_list item)
{
	char *s;
	int i, len;

	s = va_arg(item, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
}
