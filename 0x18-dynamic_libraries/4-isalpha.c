#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character
 * @c: char for check
 * Return: 1 if char is a letter, lowercase or uppercase otherwise 0.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
