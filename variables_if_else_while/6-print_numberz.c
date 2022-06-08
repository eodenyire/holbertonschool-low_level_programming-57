#include <stdio.h>

/**
* main - Main function for print digit number of base 10 start from 0
* Return: 0
*/

int main(void)
{
	int i;
	int a = 48;

	for (i = 0; i < 10; i++)
{
	putchar(a++);
}
	putchar('\n');
	return (0);
}
