#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc li ball.a *o
ranli b li ball.a
