/*
** EPITECH PROJECT, 2020
** test
** File description:
** test
*/

#include "myprintf.h"

char *my_revstr(char *str)
{
    int len = my_strlen(str) - 1;
    int index = 0;
    char temp;
    char *reversed = str;

    if (len <= 0)
        return (str);
    while (index < my_strlen(str) / 2) {
        temp = str[len - index];
        str[len - index] = reversed[index];
        reversed[index] = temp;
        index++;
    }
    return (reversed);
}
