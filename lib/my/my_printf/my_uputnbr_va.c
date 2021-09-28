/*
** EPITECH PROJECT, 2020
** my_uputnbr.c
** File description:
** display unsigned int
*/

#include "myprintf.h"

void my_uputnbr_va(va_list *ap)
{
    unsigned int nb = va_arg(*ap, unsigned int);
    my_uputnbr(nb);
}
