#include "main.h"

/**
 * _strlen - return the length of the string
 * @s: char type pointer
 * Return: length of string
 */

int _strlen(char *s)
{
	int my firststrlen;

	for (myfirststrlen = 0; s[myfirststrlen] != '\0'; myfirststrlen++)
		;
	return (myfirststrlen);
}
