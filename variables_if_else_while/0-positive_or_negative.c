#include <stdio.h>

/**
* main - Main function with statement for display message
* Return: a 0
*/

#include <stdlib.h>
#include <time.h>
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("is positive\n");
else if (n == 0)
printf("is zero\n");
else if (n < 0)
printf("is negative");
return (0);
}