/*
** EPITECH PROJECT, 2020
** my_putslash
** File description:
** display a slash
*/

#include "myprintf.h"

int size_res(int nb)
{
    int i = 0;

    while (nb != 0) {
        nb = nb / 8;
        i++;
    }
    return (i);
}

void my_putoctal(int nb)
{
    int i = 0;
    char *str = malloc(sizeof(char) * size_res(nb));

    while (nb != 0) {
        str[i] = (nb % 8) + 48;
        nb = nb / 8;
        i++;
    }
    str[i] = '\0';
    my_revstr(str);
    my_putstr(str);
    free(str);
}

void my_putslash(char *str)
{
    int i = 0;
    int s = 0;

    while (str[i] != '\0') {
        if (str[i] < 32 || str[i] >= 127) {
            my_putchar('\\');
            s = str[i];
            my_putoctal(s);
        } else
            my_putchar(str[i]);
        i++;
    }
}

void my_putslash_va(va_list *ap)
{
    char *arg = va_arg(*ap, char *);
    my_putslash(arg);
}
