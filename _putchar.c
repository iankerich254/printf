#include "main.h"
/**
 * _putchar - The function to print a character
 * @c: the character
 * Return: 1 on success, else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
