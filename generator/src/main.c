/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "my.h"

int main(int ac, char **av)
{
    if (!check_error(ac)) {
        return run_generator();
    } else {
        return 84;
    }
    return 0;
}