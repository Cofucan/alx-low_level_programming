#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_tab - Prints an array of string
 * @tab: The array to print
 *
 * Return: nothing
 */
void print_tab(char **tab)
{
    int i;

    for (i = 0; tab[i] != NULL; ++i)
    {
        printf("%s\n", tab[i]);
    }
}

/**
 * main - check the code for ALX School students.
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
    char **tab;
	char **tab_a;
	char **tab_b;

	printf(">>>>>>>>>>>>>>>>>>>\n");
	tab = strtow("      ALX School         #cisfun      ");
    if (tab == NULL)
    {
        printf("Failed\n");
        return (1);
    }
    print_tab(tab);

	printf(">>>>>>>>>>>>>>>>>>>\n");
    tab_a = strtow(" Talk is cheap. Show me the code. ");
    if (tab_a == NULL)
    {
        printf("Failed\n");
        return (1);
    }
    print_tab(tab_a);

	printf(">>>>>>>>>>>>>>>>>>>\n");
    tab_b = strtow("Talk is cheap. Show me the code.");
    if (tab_b == NULL)
    {
        printf("Failed\n");
        return (1);
    }
    print_tab(tab_b);
    return (0);
}
