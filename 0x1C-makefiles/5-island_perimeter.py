#!/usr/bin/python3
""" Module containing the function island_perimeter """


def island_perimeter(grid: list) -> int:
    """ Function that returns the perimeter of island described in grid """
    perimeter: int = 0

    nrows: int = len(grid)

    if grid != []:
        ncolumns = len(grid[0])

    for row in range(nrows):
        for column in range(ncolumns):
            if grid[row][column] == 1:
                if (row - 1) == -1 or grid[row - 1][column] == 0:
                    perimeter += 1
                if (row + 1) == nrows or grid[row + 1][column] == 0:
                    perimeter += 1
                if (column - 1) == -1 or grid[row][column - 1] == 0:
                    perimeter += 1
                if (column + 1) == ncolumns or grid[row][column + 1] == 0:
                    perimeter += 1

    return perimeter
