/*
** EPITECH PROJECT, 2020
** my_uputnbr
** File description:
** display an unsigned number
*/

#include "myprintf.h"

void my_uputnbr(unsigned int nb)
{
    if (nb == 4294967295) {
        write(1, "4294967295", 10);
        return;
    }
    if (nb < 10)
        my_putchar(nb + '0');
    else {
        my_uputnbr(nb / 10);
        my_putchar(nb % 10 + '0');
    }
}
