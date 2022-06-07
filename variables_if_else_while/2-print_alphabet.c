#include <stdio.h>

/**
* main - Main function for print alphabet with putchar
* Return: 0
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
{
	putchar (c++);
	putchar ('\n');
}
	return (0);
}
