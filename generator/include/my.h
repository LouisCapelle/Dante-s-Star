/*
** EPITECH PROJECT, 2020
** include
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_

typedef struct maze_s {
    char *map;
    char **buffer;
    int x;
    int y;
} maze_t;


int check_error(int ac, char **av);
int run_generator(int ac, char **av);
void print_error(char *error);

#endif /* !MY_H_ */
