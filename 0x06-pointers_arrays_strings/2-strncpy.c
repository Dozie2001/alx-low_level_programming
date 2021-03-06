#include "main.h"
/**
 * _strncpy - a function that copies the strings
 * @dest: an input string
 * @src: an input string
 * @n: an input intger
 * Return: A pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int slen = 0, i = 0;
	char *tmp = dest, *strt = src;

	while (*src)
	{
		slen++;
		src++;
	}

	slen++;

	if (n > slen)
		n = slen;

	src = strt;

	for (; i < n; i++)
		*dest++ = *src++;

	return (tmp);
}
