/*
** EPITECH PROJECT, 2020
** myprintf_h
** File description:
** myprintf_h
*/

#ifndef MYPRINTF_H_
#define MYPRINTF_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct flags {
    char str;
    void (*ptr)(va_list *);
}flags_t;

void my_putchar_va(va_list *);
void my_putchar(char c);
void my_putstr_va(va_list *);
void my_putstr(char *);
void my_uputnbr_va(va_list *);
void my_uputnbr(unsigned int);
void my_putnbr_va(va_list *);
void my_putnbr(int);
void convert_binary(int);
void convert_binary_va(va_list *);
void convert_octal(int);
int diez_space(char const *);
int convertoctal(int);
void convert_octal_va(va_list *);
void convert_hexa(int);
void convert_hexa_maj(int);
void convert_hexa_maj_va(va_list *);
void convert_hexa_va(va_list *);
void my_putslash(char *);
void my_putslash_va(va_list *);
char *my_revstr(char *);
int my_strlen(char *);
void my_printf(char const *, ...);

#endif
