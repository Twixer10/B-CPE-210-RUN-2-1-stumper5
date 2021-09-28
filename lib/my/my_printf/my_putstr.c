/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** display a string
*/

#include "myprintf.h"

void my_putstr(char *str)
{
    write(1, str, my_strlen(str));
}
