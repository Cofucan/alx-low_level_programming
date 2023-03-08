#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void *x_element, const void *y_element);

/**
 * main - Entry point
 * 
 * retrun: Exit code 0
*/

int main(void)
{
    int nums[] = {4, 2, 7, 21, 6, 13, 11, 1, 9, 0, 21, 8};
    int size;
    int u;

    size = sizeof(nums) / sizeof(nums[0]);

    for (u = 0; u < size; u++)
    {
        printf("Number %d => %d\n", u, nums[u]);
    }

    qsort(nums, size, sizeof(int), compare);

    for (u = 0; u < size; u++)
    {
        printf("Number %d => %d\n", u, nums[u]);
    }

    return (0);
}


/**
 * compare: Comarison function for qsort function
 * 
 * return: Integer
*/

int compare(const void *x_element, const void *y_element)
{
    int x = *(int *)x_element;
    int y = *(int *)y_element;

    return x - y;
}