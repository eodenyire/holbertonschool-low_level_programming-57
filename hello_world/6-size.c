#include <stdio.h>
/**
* main - Main function for display message with Printf with Sizeof
* Return: a 0
*/
int main(void)
{
printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("Size of an int: %i byte(s)\n", sizeof(int));
printf("Size of a long int: %ld byte(s)\n", (int)sizeof(long));
printf("Size of a long long int: %lld byte(s)\n", (int)sizeof(long long));
printf("Size of a float: %d byte(s)\n", sizeof(float));
return (0);
}
