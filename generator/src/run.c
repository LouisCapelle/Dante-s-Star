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
#include <time.h>

maze_t *init_generator(maze_t *maze, int x, int y)
{
    maze = malloc(sizeof(maze_t));
    maze->map = get_blank_map(x, y);
    return maze;
}

int gen_imperfect(int x, int y)
{
    maze_t *maze = init_generator(maze, x, y);

    print_map(maze->map);
    return 0;
}

int gen_perfect(int x, int y)
{
    return 0;
}

int run_generator(int ac, char **av)
{
    srand(time(NULL));
    if (ac == 4 && strcmp(av[3], "perfect") == 0) {
        return gen_perfect(atoi(av[1]), atoi(av[2]));
    } else if (ac == 4 && strcmp(av[3], "imperfect") == 0) {
        return gen_imperfect(atoi(av[1]), atoi(av[2]));
    } else if (ac == 3){
        return gen_imperfect(atoi(av[1]), atoi(av[2]));
    } else {
        return 84;
    }
    return 0;
}