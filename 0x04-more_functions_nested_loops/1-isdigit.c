#include "main.h"

/**
 * _isdigit - check if numbers are between 0 and  9
 * @c: char to get checked
 *
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
