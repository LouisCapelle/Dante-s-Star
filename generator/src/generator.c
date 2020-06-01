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

void maze_map(char **map, int width, int height)
{
    int z = random() % 4;
    static int x = 0;
    static int y = 0;

    if (x < width - 1 && z == 0) {
        map[y][x + 1] = '*';
        x++;
    } else if (x > 0 && z == 1) {
        map[y][x - 1] = '*';
        x--;
    } else if (y < height - 1 && z == 2) {
        map[y + 1][x] = '*';
        y++;
    } else if (y > 0 && z == 3) {
        map[y - 1][x] = '*';
        y--;
    }
}

char **get_blank_map(int x, int y)
{
    int i = 0;
    int z = 0;
    char **result = malloc(sizeof(char *) * (y + 1));

    while (i < y) {
        result[i] = malloc(sizeof(char) * (x + 1));
        z = 0;
        result[0][0] = '*';
        while (z < x) {
            result[i][z] = 'X';
            z += 1;
        }
        i += 1;
    }
    result[i - 1][z - 1] = '*';
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
    char **caca = NULL;

    srandom(time(NULL));
    map = get_blank_map(x, y);
    while (map[y - 1][x - 2] != '*' && x > 1 && y > 2) {
        maze_map(map, x, y);
    }
    print_cur_map(map);
    return 0;
}