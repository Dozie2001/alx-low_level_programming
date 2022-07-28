#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: Pointer
 * @s2: Pointer
 * @n: Unsigned int n
 *
 * Return:a pointer or NULL if fail
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	unsigned int len1 = 0, len2 = 0, i = 0;

	if (s1 == NULL)
		s1 = "";
	while (s1[len1])
		len1++;

	if (s2 == NULL)
		s2 = "";

	while (s2[len1])
		len2++;
	if (n >= len2)
		n = len2;

	new = malloc(len1 + n + 1);

	if (new == NULL)
		return (NULL);

	for (; i < (len1 + n); i++)
	{
		if (len1 < i)
		{
			new[i] = *s1;
			s1++;
		}

		else
		{
			new[i] = *s2;
			s2++;
		}
	}
	new[i] = '\0';
	return (new);
}



