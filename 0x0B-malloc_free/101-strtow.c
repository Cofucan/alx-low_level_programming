#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int count_words(char *str);

/**
 * strtow - splits string into words and store in a vector
 * @str: string to be split
 *
 * Return: Pointer to vector containing each word.
 */

char **strtow(char *str)
{
	int u = 0;
	int v = 0;
	int c = 0;
	int word_count;
	int word_len = 1;
	char **vec; /* Vector to store the words */

	if (!str) /* If string is null or empty */
		return (NULL);

	word_count = count_words(str);

	if (!word_count) /* If there are only spaces */
		return (NULL);

	vec = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!vec)
		return (NULL);

	for (u = 0, c = 0; u < word_count; c++, u++, word_len = 1)
	{
		/* Iterate until we encounter a char proceeded by a space */
		while (!(str[c] != ' ' && str[c + 1] <= ' '))
		{
			if (str[c] != ' ')
				word_len++;
			c++;
		}

		vec[u] = (char *)malloc(sizeof(char) * (word_len + 1));
		if (!vec[u])
		{
			for (u--; u >= 0; u--)
				free(vec[u]);
			free(vec);
			return (NULL);
		}

	}

	for (u = 0, c = 0; u < word_count; u++)
	{
		v = 0;
		while (!(str[c] != ' ' && str[c + 1] <= ' '))
		{
			if (str[c] != ' ')
			{
				vec[u][v] = str[c];
				v++;
			}
			c++;
		}
		vec[u][v] = str[c];
		v++;
		vec[u][v] = '\0';
		c++;
	}

	vec[u] = NULL;

	return (vec);
}

/**
 * count_words - counts number of words in a string
 * @str: string to be counted
 *
 * Return: Integer.
 */

int count_words(char *str)
{
	int x;
	int count = 0;

	for (x = 0; str[x]; x++)
	{
		if (str[x] != ' ' && str[x + 1] <= ' ')
			count += 1;
	}

	return (count);
}
