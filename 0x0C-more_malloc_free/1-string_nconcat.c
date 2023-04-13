#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - concatenate strings
 *
 * @s1: destination string
 * @s2: source string
 * @n: number of chars in s2 to be concatenated to s1
 *
 * Return: pointer to char where concatenated string is stored
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0;
	unsigned int j;
	int len = 0;
	char *concat;

	if (s1 != NULL)
		len = strlen(s1);

	concat = malloc(sizeof(char) * (len + n) + 1);

	if (concat == NULL)
		return (NULL);

	if (s1 != NULL)
	{
		len = strlen(s1);
		for (; i < len; i++)
		{
			concat[i] = s1[i];
		}
	}

	if (s2 != NULL)
	{
		for (j = 0; j < n; j++)
		{
			concat[i] = s2[j];
			i++;
		}
	}
	concat[i] = '\0';

	return (concat);
}
