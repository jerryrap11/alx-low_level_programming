#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/** Main - A program that prints a line with print f **/
int Main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
if (n > 0)
print f(" % d is positive", n);
else if (n == 0)
print f(" % d is zero", n);
else if (n < 0)
print f(" % d is negative", n);
	return (0);
}
