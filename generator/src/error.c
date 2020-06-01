/*
** EPITECH PROJECT, 2020
** error
** File description:
** error
*/

#include "my.h"

int check_error(int ac)
{
    if (ac >= 3 && ac <= 4) {
        return 0;
    } else {
        return 1;
    }
}