#!/usr/bin/python3
"""Island Perimeter"""


def island_perimeter(grid):
    """returns the perimeter of the ispland"""
    number_of_squares = 0
    sides_to_be_removed = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                number_of_squares += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    sides_to_be_removed += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    sides_to_be_removed += 1
    return number_of_squares * 4 - sides_to_be_removed * 2
