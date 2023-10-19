#include <stdio.h>
#include "main.h"

/**
 * _atoi - excercise name
 * @s: entry one
 *
 * Description: pointers arrays strings
 *
 * Return: lenght of string
 */

int  _atoi(char *s)
{
	int ns;
	int nl;
	int negative = 0;
	int counter;
	int counter2;
	int number = 0;
	int prenumber;
	for (ns = 0 ; (s[ns] < '0' || s[ns] > '9') && (s[ns] != '\0') ; ns++)
	{
		if (s[ns] == '-')
			negative++;
	}
	for (nl = 0 ;  s[ns + nl] >= '0' && s[ns + nl] <= '9' && s[ns + nl] ; nl++)
	{
	}
	nl--;
	for (counter = 0 ; counter <= nl ; counter++)
	{
		prenumber = s[ns + nl - counter] - '0';
		for (counter2 = 0 ; counter2 < counter ; counter2++)
			prenumber = prenumber * 10;
	if (number != 147483648 && prenumber != 2000000000)
		number = number + prenumber;
	else
		number =-2147483648;
	}
	if (negative % 2 != 0 && number != -2147483648)
		number = -number;
return (number);
}

