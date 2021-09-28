/*
** EPITECH PROJECT, 2020
** my_putnbr
** File description:
** display a number
*/

#include "myprintf.h"

void my_putnbr_va(va_list *ap)
{
    int nb = va_arg(*ap, int);
    my_putnbr(nb);
}
