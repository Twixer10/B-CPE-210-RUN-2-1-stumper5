/*
** EPITECH PROJECT, 2020
** my_putchar
** File description:
** display a character
*/

#include <unistd.h>
#include <stdarg.h>
#include "myprintf.h"

void my_putchar_va(va_list *ap)
{
    char c = va_arg(*ap, int);
    my_putchar(c);
}
