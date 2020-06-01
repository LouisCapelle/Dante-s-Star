/*
** EPITECH PROJECT, 2020
** error
** File description:
** error
*/

#include "my.h"
#include <stdio.h>
#include <stdlib.h>

void print_error(char *error)
{
    dprintf(2, "%s\n", error);
}

int check_error(int ac, char **av)
{
    int a = atoi(av[1]);
    int b = atoi(av[2]);

    if (ac >= 2 && ac <= 4 && a != 0 && b != 0) {
        return 0;
    } else {
        print_error("Can't generate maze.");
        return 1;
    }
}