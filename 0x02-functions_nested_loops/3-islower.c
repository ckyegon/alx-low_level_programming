#include "main.h"
/**
* _islower - function checks if lower charracter c
* Return: Returns 1 if c s lowercase otherwise 0
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
