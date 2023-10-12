#include "main.h"
/**
 * _isalpha - excercise two
 * @c: char
 *
 * Description: functions nested loops
 *
 * Return: does not return nothing at all
 */

int _isalpha(int c)
	{
		int result = 0;

		if (c >= 'a' && c <= 'z')
			result = 1;
		if (c <= 'A' && c <= 'z')
			result = 1;
		return (result);
}
