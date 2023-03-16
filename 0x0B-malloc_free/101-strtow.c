#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int count_words(char *str);

/**
 * strtow - splits string into words
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
	int word_len;
	char **vec;

	if (!str)
		return (NULL);
	word_count = count_words(str);

	if (!word_count) /* If there are only spaces */
		return (NULL);
	vec = malloc((sizeof(char *) * word_count) + 1);

	if (!vec)
		return (NULL);

	for (u = 0, c = 0; u < word_count; c++, u++, word_len = 0)
	{
		while (!(str[c] == ' ' && str[c - 1] > ' ') || !str[c])
		{
			if (str[c] != ' ')
				word_len++;
			c++;
		}

		vec[u] = malloc((sizeof(char) * word_len) + 1);
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
		for (; !(str[c] == ' ' && str[c - 1] > ' ') || !str[c]; c++)
			if (str[c] != ' ')
			{
				vec[u][v] = str[c];
				v++;
			}
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

	for (x = 1; str[x]; x++)
	{
		if (str[x] == ' ' && str[x - 1] != ' ')
			count += 1;
	}

	if (!str[x] && str[x - 1] != ' ')
		count += 1;

	return (count);
}
