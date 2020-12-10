/*
** EPITECH PROJECT, 2020
** miniprint
** File description:
** miniprint header
*/

#ifndef MINIPRINT_H_
#define MINIPRINT_H_

#include "tools.h"

#define PRINT_STR(str) write(1, (str), my_strlen((str)))

void miniprint(char *format, ...);

#endif /* !MINIPRINT_H_ */
