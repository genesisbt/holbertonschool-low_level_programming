#include <stdio.h>

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
	int out = 1;
	int numstart;
	int numlength;
	int negative = 0;
	int counter;
	int counter2;
	int number = 0;
	int prenumber;

	for (numstart = 0 ; s[numstart] < '0' || s[numstart] > '9' && s[numstart] != '\0' ; numstart++)
	{
	//	printf("%c", s[numstart]);
	}
	printf("\n");
	for ( numlength = 0 ;  s[numstart + numlength] >= '0' && s[numstart + numlength] <= '9' && s[numstart + numlength] != '\0' ; numlength++)
	{
		printf("%d",  s[numstart + numlength] - '0');
	}
	numlength--;
	for ( counter = 0 ; counter <= numlength ; counter++)
	{
		prenumber = s[numstart + numlength - counter] - '0';
		printf ("prenumber is: %d \n", prenumber);
		for (counter2 = 0 ; counter2 < counter ; counter2 ++)
			prenumber = prenumber *10;
	number = number + prenumber;
	printf ("Number is %d: \n", number);
	}
//	printf ("%d \n", number);
//	for ( counter = 0 ; s[counter] <= s[numstart] ; counter++)
//	{
//	if (s[counter] = '-')	
//		negative++;
//	}	

return (1);
}

int main(void)
{
	    int nb;

	nb = _atoi("98");
	printf("%d\n", nb);
	nb = _atoi("-402");
	printf("%d\n", nb);
	nb = _atoi("          ------++++++-----+++++--98");
	printf("%d\n", nb);
//	nb = _atoi("214748364");
//	printf("%d\n", nb);
//	nb = _atoi("0");
//	printf("%d\n", nb);
//	nb = _atoi("Suite 402");
//	printf("%d\n", nb);
//	nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
//	printf("%d\n", nb);
//	nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
//	printf("%d\n", nb);
return (0);
}
