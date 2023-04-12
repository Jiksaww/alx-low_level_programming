#include <stdlib.h>
#include <string.h>

/*
 *       NOTE: I had to split my function into two
 *       to comply with the betty doc style
 *       of not more than 40 lines per fucntion
 */

/**
 * conditional - code snippet for function concat
 *
 * @s1: address of s1
 * @s2: address of s2
 * @s1len: length of s1
 * @s2len: length of s2
 * @check: length of s3
 */

void conditional(char *s1, char *s2, int *s1len, int *s2len, int *check)
{
	if (s1 == NULL)
	{
		*s1len = 0;
		*check = 1;
	}

	else
	{
		*s1len = strlen(s1);
	}

	if (s2 == NULL)
	{
		*s2len = 1;
		*check = 2;
	}
	else
	{
		*s2len = strlen(s2);
	}
}

/**
 * *str_concat - concatenate provided strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to first string or null on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, s1len = 0, s2len = 0, check = 0;
	char *newstr;

	conditional(s1, s2, &s1len, &s2len, &check);

	/* allocate memory to newstr */
	newstr = malloc((s1len + s2len + 1) * sizeof(char));

	if (newstr == NULL)
		return (NULL);

	if (s1 == NULL && s2 == NULL)
		return (strdup(""));

	/* iterate over and assign values of first string */
	for (i = 0; i < (s1len + s2len); i++)
	{
		if (i < s1len)
		{
			if (check == 2 || check == 0)
				newstr[i] = s1[i];

			if (check == 1)
				newstr[i] = (char) 0;

			continue;
		}
		if (check == 1 || check == 0)
			newstr[i] = s2[j];

		if (check == 2)
			newstr[i] = (char) 0;
		j++;
	}

	newstr[i] = '\0';

	return (newstr);
}
