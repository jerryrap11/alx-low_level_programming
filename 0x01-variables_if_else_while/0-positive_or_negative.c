#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
* Main - A program that prints a line with print f
* Return: Always 0  for success
**/
int Main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
if (n > 0)
printf("%d is positive", n);
else if (n == 0)
printf("%d is zero", n);
else
printf("%d is negative", n);
printf("\n")
return 0;
}
