/*
** EPITECH PROJECT, 2020
** diez
** File description:
** diez
*/

#include "myprintf.h"

int diez_space(char const *str)
{
    if (*str == '#') {
        str++;
        return (1);
    }
    if (*str == ' ') {
        str++;
        return (1);
    }
    else
        return (0);
}

void diez_space_va(va_list *ap)
{
    char const *str = va_arg(*ap, char *);
    diez_space(str);
}
