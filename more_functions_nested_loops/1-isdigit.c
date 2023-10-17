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

	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
{
	b = 0;
}
else if (c >= 0 && c <= 9)
{
	b = 1;
}
return (b);
}
