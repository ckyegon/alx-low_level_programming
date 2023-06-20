#include "main.h"
/**
* _isalpha - Checks for letter, lowercase or uppercase
* @c: The character to be checked
* Return: Return 1 if c is a letter lowercase or uppercase
*/
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
