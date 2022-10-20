#include "main.h"
/**
* _isdigit - code that checks for a digit (0 through 9).
* @a: Integer input
* Return: Always 0.
*/

int _isdigit(int a)

{
	if (a >= '0' &&  a <= '9')
		return (1);

	else
		return (0);

}

