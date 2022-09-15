#include "main.h"

/**
*_isupper - checks if a character is uppercase or not
*@c: int type number
*Return: 1 if uppercase, else 0
*/
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	
	return (0);
}
