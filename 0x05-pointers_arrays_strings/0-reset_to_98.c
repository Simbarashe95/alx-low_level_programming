#include "main.h"
/**
* reset_to_98 - Resets to 98.
* n : n is the pointer that shld return value 98
* Return: Always 0.
*/

int main(void)

{
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}


