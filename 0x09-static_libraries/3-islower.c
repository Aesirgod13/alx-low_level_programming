#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _islower - checks for lower case
 * @c: c is an ascii character
 *
 * Return: 1 if lower case
 */

	int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
{
	return (1);
}
	else
{
	return (0);
}
}
