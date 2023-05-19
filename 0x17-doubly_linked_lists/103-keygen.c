#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int findLargestNumber(char *username, int length);
int multiplyChars(char *username, int length);
int generateRandomChar(char *username);

/**
 * main - generates a key for a particular username
 * @argc: Number of arguments passed into the program.
 * @argv: Vector containing all arguments passed.
 *
 * Return: 0 for success.
 */

int main(int argc, char **argv)
{
	char keygen[7];
	int length, ch, vch;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850
	};
	(void)argc;

	/* Calculate the length of the username */
	for (length = 0; argv[1][length]; length++)
		;

	/* Function 1 */
	keygen[0] = ((char *)alph)[(length ^ 59) & 63];

	/* Function 2 */
	ch = vch = 0;
	while (vch < length)
	{
		ch += argv[1][vch];
		vch++;
	}
	keygen[1] = ((char *)alph)[(ch ^ 79) & 63];

	/* Function 3 */
	ch = 1;
	vch = 0;
	while (vch < length)
	{
		ch *= argv[1][vch];
		vch++;
	}
	keygen[2] = ((char *)alph)[(ch ^ 85) & 63];

	/* Function 4 */
	keygen[3] = ((char *)alph)[findLargestNumber(argv[1], length)];

	/* Function 5 */
	keygen[4] = ((char *)alph)[multiplyChars(argv[1], length)];

	/* Function 6 */
	keygen[5] = ((char *)alph)[generateRandomChar(argv[1])];
	keygen[6] = '\0';

	/* Print the generated key */
	printf("%s\n", keygen);

	return (0);
}

/**
 * keygen - generates a key for a particular username
 * @argc: Number of arguments passed into the program.
 * @argv: Vector containing all arguments passed.
 *
 * Return: Nothing.
 */

void keygen(int argc, char **argv)
{
	char *username;
	char key[10];
	int i, j, ulen;

	if (argc != 2)
	{
		printf("Usage: %s <username>\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	username = argv[1];
	ulen = strlen(username);

	i = ulen - 1;
	j = 0;

	while (i >= 0)
	{
		key[j] = username[i] + i;
		i--;
		j++;
	}
	key[j] = '\0';

	printf("%s\n", key);
}

/**
 * findLargestNumber - finds the largest number among the characters
 *					   in the username
 * @username: Username.
 * @length: Length of the username.
 *
 * Return: Lergest number.
 */

int findLargestNumber(char *username, int length)
{
	int current, largest;
	int index = 0;

	largest = *username;

	while (index < length)
	{
		current = username[index];
		if (current > largest)
			largest = current;
		index++;
	}

	srand(largest ^ 14);
	return (rand() & 63);
}

/**
 * multiplyChars - multiplies each character of the username with itself
 *				   and accumulates the result.
 * @username: Username.
 * @length: Length of the username.
 *
 * Return: Accumulated result.
 */

int multiplyChars(char *username, int length)
{
	int result = 0;
	int index = 0;

	while (index < length)
	{
		result += username[index] * username[index];
		index++;
	}

	return ((result ^ 239) & 63);
}

/**
 * generateRandomChar - generates a random character based on the length
 *						of the username.
 * @username: Username.
 *
 * Return: Random character.
 */

int generateRandomChar(char *username)
{
	int ch;
	int index = 0;

	while (index < *username)
	{
		ch = rand();
		index++;
	}

	return ((ch ^ 229) & 63);
}
