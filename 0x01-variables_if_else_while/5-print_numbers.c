#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int x;

x = 0;
while (x < 10)
{
printf("%d", x);
if (x < 9)
x++;
}
printf("\n");
return (0);
}
