#include <stdio.h>
/**
 * _putchar - function to check for
 * @c: is character to be checked
 * Return: 1 if true and -1 if an error
 */

int _putchar(char c)
{	return (write(1, &c, 1));
}
