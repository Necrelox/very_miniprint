/*
** EPITECH PROJECT, 2020
** put_nbr
** File description:
** output a number
*/

#include "tools.h"

void put_nbr(long long nb)
{
    char c;
    nb < 0 ? nb *= -1, c = '-', PUTCHAR(c) :0;

    if (nb <= 9) {
        c = nb + 48;
        PUTCHAR(c);
    }
    else if (nb >= 10) {
        put_nbr(nb / 10);
        c = (nb % 10) + 48;
        PUTCHAR(c);
    }
}