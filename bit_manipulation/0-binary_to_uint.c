#include"main.h"
/**
 * binary_to_uint - name
 * @b: first entry
 * Description: something
 * Return: something
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;

	if (b == NULL)
		return 0;
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return 0;
		number = number << 1;
		if (*b == '1')
			number = number | 1;
		b++;
	}
	return number;
}

