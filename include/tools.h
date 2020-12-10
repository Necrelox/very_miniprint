/*
** EPITECH PROJECT, 2020
** tools.h
** File description:
** tools.h
*/

#ifndef TOOLS_H_
#define TOOLS_H_

#include <stdio.h>

#include <stdlib.h>
#include <stdarg.h>

#include <unistd.h>

#define PUTCHAR(c) write(1, (&c), 1)

int my_strlen(const char *str);
void put_nbr(long long nb);

#endif /* !TOOLS_H_ */
