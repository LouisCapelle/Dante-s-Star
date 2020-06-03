/*
** EPITECH PROJECT, 2020
** include
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_

int check_error(int ac, char **av);
int run_generator(int ac, char **av);
void print_error(char *error);
int gen_normal(int x, int y);
char *get_blank_line(int x);
char **get_blank_map(int x, int y);
void print_map(char **map);

typedef struct maze_s
{
    char **map;
} maze_t;


#endif /* !MY_H_ */
