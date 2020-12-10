/*
** EPITECH PROJECT, 2020
** my_strlen
** File description:
** my_strlen
*/

#include "tools.h"

int my_strlen(const char *str)
{
    register int i = 0;
    for (;str[i] != '\0'; i++);
    return i;
}