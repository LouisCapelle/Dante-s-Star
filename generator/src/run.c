/*
** EPITECH PROJECT, 2020
** run
** File description:
** run
*/

#include "my.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_map(char **map)
{
    int i = 0;

    while(map[i])
    {
        printf("%s\n", map[i]);
        i += 1;
    }
}

maze_t *init_maze(int x, int y)
{
    maze_t *maze = malloc(sizeof(maze_t));

    maze->buffer = NULL;
    maze->map = NULL;
    maze->x = x;
    maze->y = y;
    return maze;
}

int gen_perfect(int x, int y)
{
    printf("gen perfect");
    return 0;
}

int gen_normal(int height, int width)
{
    maze_t *maze = init_maze(height, width);
    return 0;
}

int run_generator(int ac, char **av)
{
    if (ac == 4 && strcmp(av[3], "perfect") == 0) {
        gen_perfect(atoi(av[1]), atoi(av[2]));
    } else if (ac == 3) {
        gen_normal(atoi(av[1]), atoi(av[2]));
    } else {
        return 84;
    }
    return 0;
}