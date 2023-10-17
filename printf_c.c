#include "main.h"
/**
 * printf_c - prints a character
 * @item - argument
 * Return: 1
 */
int printf_c(va_list item)
{
	char s;

	s = va_arg(item, int);
	_putchar(s);
	return (1);
}
