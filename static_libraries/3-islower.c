#include "main.h"
/**
 * _islower - excercise two
 * @c: char
 *
 * Description: functions nested loops
 *
 * Return: does not return nothing at all
 */

int _islower(int c)
	{
		int result;

		if (c >= 'a' && c <= 'z')
			result = 1;
		else
			result = 0;
		return (result);
}
