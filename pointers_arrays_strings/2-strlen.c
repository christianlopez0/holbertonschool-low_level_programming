#include "main.h"

/**
 * _strlen - return the length of the string
 * @s: char type pointer
 * Return: length of string
 */

int _strlen(char *s)
{
	char s[] = "Programming is fun";
    int i;

    for (i = 0; s[i] != '\0'; ++i);

    printf("Length of the string: %d", i);
    
	return 0;
}
