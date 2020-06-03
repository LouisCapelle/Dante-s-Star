/*
** EPITECH PROJECT, 2020
** map
** File description:
** map
*/

#include "my.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

char *get_blank_line(int x)
{
    char *result = malloc(sizeof(char) * (x + 1));
    int i = 0;

    while (i < x) {
        result[i] = 'X';
        i += 1;
    }
    result[i + 1] = '\0';
    return result;
}

char **get_blank_map(int x, int y)
{
    char **result = malloc(sizeof(char *) * (y + 1));
    int i = 0;

    while (i < y) {
        result[i] = get_blank_line(x);
        i += 1;
    }
    result[0][0] = '*';
    result[i + 1] = NULL;
    return result;
}

void print_map(char **map)
{
    int i = 0;

    while (map[i]) {
        printf("%s\n", map[i]);
        i += 1;
    }
}