#include "main.h"
/**
* _islower - Function checks if lower charracter
* @c: Character is to be checked
* Return: Returns 1 if c is lowercase otherwise 0
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
