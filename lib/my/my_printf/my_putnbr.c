/*
** EPITECH PROJECT, 2020
** my_putnbr
** File description:
** display a number
*/

#include "myprintf.h"

void my_putnbr(int nb)
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
    if (nb < 10)
        my_putchar(nb + '0');
    else {
        my_putnbr(nb / 10);
        my_putchar(nb % 10 + '0');
    }
}
