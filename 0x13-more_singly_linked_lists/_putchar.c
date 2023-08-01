#include <unistd.h>
/**
 * _putchar - function to check
 * @c: - is the character to be checked
 * Return: 1 for true and -1 for error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
