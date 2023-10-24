#include "main.h"
/**
 * _isdigit - excercise five variables
 * @c: entry one
 * Description: one to ten
 *
 * Return: does not return nothing at all
 */

int _isdigit(int c)
{
int b;

	if (c >= '0' && c <= '9')
	{
	b = 1;
}
else
{
	b = 0;
}
return (b);
}
