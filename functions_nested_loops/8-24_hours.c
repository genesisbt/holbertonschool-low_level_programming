#include "main.h"
/**
 * jack_bauer - excercise
 *
 * Description: Absolute Value
 *
 * Return: does not return nothing at all
 */

int jack_bauer(void)
{
	int minuto;
	int hora;
	int minutob;
	int horab;

for (hora = 0 ; hora < 24 ; hora++)
{
	if (hora >= 10)
	{
		horab = hora / 10;
	}
	else
	{
		horab = 0;
	}
	for (minuto = 0; minuto < 60; minuto++)
	{
		if (minuto >= 10)
		{
			minutob = minuto / 10;
		}
		else
		{
			minutob = 0;
		}
	_putchar(horab + '0');
	_putchar(hora % 10 + '0');
	_putchar(':');
	_putchar(minutob + '0');
	_putchar(minuto % 10 + '0');
	_putchar ('\n');
	}

}
return (0);
}
