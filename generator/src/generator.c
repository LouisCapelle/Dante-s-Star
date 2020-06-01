/*
** EPITECH PROJECT, 2020
** gen
** File description:
** gen
*/

#include "my.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char **get_blank_map(int x, int y)
{
    int i = 0;
    int z = 0;
    char **result = malloc(sizeof(char *) * (y + 1));

    while (i < y) {
        result[i] = malloc(sizeof(char) * (x + 1));
        z = 0;
        while (z < x) {
            result[i][z] = '*';
            z += 1;
        }
        i += 1;
    }
    result[i] = NULL;
    return result;
}

void print_cur_map(char **map)
{
    int i = 0;

    while (map[i]) {
        printf("%s\n", map[i]);
        i += 1;
    }
}

int gen_normal(int x, int y)
{
    char **map = NULL;

    srandom(time(NULL));
    map = get_blank_map(x, y);
    print_cur_map(map);
    return 0;
}