/*
** EPITECH PROJECT, 2020
** my_convert_octal_va
** File description:
** my_convert_octal_va
*/

#include "myprintf.h"

void convert_binary_va(va_list *ap)
{
    int nb = va_arg(*ap, int);
    convert_binary(nb);
}

void convert_octal_va(va_list *ap)
{
    int nb = va_arg(*ap, int);
    convert_octal(nb);
}

void convert_hexa_va(va_list *ap)
{
    int nb = va_arg(*ap, int);
    convert_hexa(nb);
}

void convert_hexa_maj_va(va_list *ap)
{
    int nb = va_arg(*ap, int);
    convert_hexa_maj(nb);
}
