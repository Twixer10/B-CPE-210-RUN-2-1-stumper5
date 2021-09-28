/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** copy of print function
*/

#include <unistd.h>
#include <stdarg.h>
#include "myprintf.h"

static const flags_t my_flags[13] = {
    {'c', &my_putchar_va},
    {'s', &my_putstr_va},
    {'d', &my_putnbr_va},
    {'i', &my_putnbr_va},
    {'u', &my_uputnbr_va},
    {'o', &convert_octal_va},
    {'x', &convert_hexa_va},
    {'X', &convert_hexa_maj_va},
    {'b', &convert_binary_va},
    {'B', &convert_binary_va},
    {'S', &my_putslash_va},
    {0, 0}
};

void detect_flag(char const *str, va_list *ap)
{
    void (*ptr_call)(va_list *ap) = NULL;

    str++;
    for (int i = 0; my_flags[i].str != 0; i++) {
        if (*str == my_flags[i].str) {
            ptr_call = my_flags[i].ptr;
        }
    }
    if (ptr_call != NULL) {
        ptr_call(ap);
    } else {
        write(1, str, 1);
    }
    str++;
}

int diez_space(char const *str)
{
    str++;
    if (*str == '#') {
        return (1);
    }
    if (*str == ' ') {
        return (1);
    }
    else
        return (0);
}

void my_printf(char const *str, ...)
{
    va_list ap;

    va_start(ap, str);
    while (*str != '\0' ) {
        if (*str == '%') {
            if (diez_space(str) == 1)
                str++;
            detect_flag(str, &ap);
            str += 2;
        } else {
            write(1, str, 1);
            str++;
        }
    }
    va_end(ap);
}
