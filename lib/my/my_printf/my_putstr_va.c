/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** display a string
*/

#include <stdarg.h>
#include <unistd.h>
#include "myprintf.h"

void my_putstr_va(va_list *ap)
{
    char *arg = va_arg(*ap, char *);

    write(1, arg, my_strlen(arg));
}
