/*
** EPITECH PROJECT, 2020
** miniprint
** File description:
** miniprint is a fuction for print a string or number
*/

#include "miniprint.h"

void flag_string(va_list arg)
{
    const char *restrict str = (const char *)va_arg(arg, const char *);
    PRINT_STR(str);
}

void flag_number(va_list arg)
{
    long long number = (long) va_arg(arg, long);
    put_nbr(number);
}

void search_flag(char *restrict format, va_list arg)
{
    register int i = 0;
    char flags_not_exist[2];
    char *restrict flags = "ds";
    void(*tab[2])() = {flag_number, flag_string};

    flags_not_exist[0] = *format;
    for (*format++; *format != *flags && *flags != '\0'; *flags++, i++);
    flags_not_exist[1] = *format;
    *flags != '\0' ? tab[i](arg): write(1, flags_not_exist, 2);
}

void miniprint(char *restrict format, ...)
{
    va_list arg;
    va_start(arg, format);

    for (;*format != '\0'; *format++)
        *format == '%' ? search_flag(&*format, arg),
            *format++ :write(1, &*format, 1);
    va_end(arg);
}