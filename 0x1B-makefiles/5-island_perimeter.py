#!/usr/bin/python3
"""island_perimiter function
"""


def island_perimeter(grid):
    """Returns preimiter of island as described by grid
    """
    perimiter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if grid[i - 1][j] == 0:
                    perimiter += 1
                if grid[i + 1][j] == 0:
                    perimiter += 1
                if grid[i][j - 1] == 0:
                    perimiter += 1
                if grid[i][j + 1] == 0:
                    perimiter += 1
    return perimiter
