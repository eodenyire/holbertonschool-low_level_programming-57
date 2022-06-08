#include <stdio.h>

/**
* main - Main function for print reverse alphabet with putchar
* Return: 0
*/

int main(void)
{
	char c = 'z';

	while (c >= 'a')
{
	putchar (c--);
}
	putchar ('\n');
	return (0);
}
