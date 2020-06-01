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

int gen_perfect(int x, int y)
{
    printf("gen perfect");
    return 0;
}

int run_generator(int ac, char **av)
{
    srand(time(NULL));
    if (ac == 4 && strcmp(av[3], "perfect") == 0) {
        gen_perfect(atoi(av[1]), atoi(av[2]));
    } else if (ac == 3) {
        gen_normal(atoi(av[1]), atoi(av[2]));
    } else {
        return 84;
    }
    return 0;
}