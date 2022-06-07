#include <stdio.h>

/**
* main - Main function for print alphabet with putchar
* Return: 0
*/

int main(void)
{
	char c = 'a';
	char d = 'A';

	while (c <= 'z')
{
	putchar (c++);
}
	while (d <= 'Z')
{
	putchar(d++);
}
	putchar ('\n');
	return (0);
}
