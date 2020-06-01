/*
** EPITECH PROJECT, 2020
** run
** File description:
** run
*/

#include "my.h"
#include <stdio.h>
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

int check_perfect(char *perfect)
{

}

int gen_perfect(int x, int y)
{
    printf("gen perfect");
}

int gen_normal(int x, int y)
{
    printf("gen normal");
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