#include <stdio.h>

/**
* main - program that prints all possible combinations of single-digit numbers
* Return: 0
*/

int main(void)
{
	int i;
	int j = 44;
	int k = 32;

	for (i = 48; i <= 57; i++)
{
	putchar(i);
	if (i <= 56)
{
	putchar(j);
	putchar(k);
}
}
	putchar('\n');
	return (0);
}
