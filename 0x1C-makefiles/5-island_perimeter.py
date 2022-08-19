#!/usr/bin/python3
""" 
    This module contains the island perimeter
    function
"""

def island_perimeter(grid):
    """
        This function calculates the perimeter of
        and island

        Perimeters
        ----------
        grid: list
            A list containing other lists

        returns: perimeter
    """

    perimeter = 0
    nrows = len(grid)
    ncolumns = len(grid[0])
    prev = 0
    next_ = 0
    up = 0
    down = 0

    for x in range(nrows):
        for y in range(ncolumns):
            val = grid[x][y]
            if not ((y+1) > ncolumns):
                next_ = grid[x][y+1]
            if not ((y-1) < 0):
                prev = grid[x][y-1]
            if not ((x-1) < nrows):
                up = grid[x-1][y]
            if not ((x+1) > nrows):
                down = grid[x+1][y]

            if val:
                if prev or next_:
                    perimeter += 1
                elif up or down:
                    perimeter += 1
    return (perimeter*2 + 2)