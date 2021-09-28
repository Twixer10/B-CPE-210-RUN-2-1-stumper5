/*
** EPITECH PROJECT, 2020
** my_convert_base
** File description:
** convert base
*/

#include "myprintf.h"

void convert_binary(int nb)
{
    int i = 1;
    int j = 1;
    long  res = 0;

    while (nb != 0) {
        i = nb % 2;
        nb /= 2;
        res += i * j;
        j *= 10;
    }
    my_putnbr(res);
}

void convert_octal(int nb)
{
    if (nb == -2147483648) {
        my_putchar('-');
        write(1, "2147483648", 10);
        return;
    }
    if (nb < 0 && nb != -2147483648) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb < 8)
        my_putchar(nb + '0');
    else {
        my_putnbr(nb / 8);
        my_putchar(nb % 8 + '0');
    }
}

int size_res_hexa(int nb)
{
    int count = 0;

    while (nb != 0) {
        nb = nb / 16;
        count++;
    }
    return (count);
}

void convert_hexa(int nb)
{
    int i = 0;
    char *str = malloc(sizeof(char) * size_res_hexa(nb));
    char base[7] = "abcdef";

    while (nb != 0) {
        if (nb % 16 >= 10)
            str[i] = base[(nb % 16) - 10];
        else
            str[i] = (nb % 16) + 48;
        nb = nb / 16;
        i++;
    }
    str[i] = '\0';
    my_revstr(str);
    my_putstr(str);
    free(str);
}

void convert_hexa_maj(int nb)
{
    int i = 0;
    char *str = malloc(sizeof(char) * size_res_hexa(nb));
    char base[7] = "ABCDEF";

    while (nb != 0) {
        if (nb % 16 >= 10)
            str[i] = base[(nb % 16) - 10];
        else
            str[i] = (nb % 16) + 48;
        nb = nb / 16;
        i++;
    }
    str[i] = '\0';
    my_revstr(str);
    my_putstr(str);
    free(str);
}
