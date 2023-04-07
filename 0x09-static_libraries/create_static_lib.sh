#!/bin/bash
ranlib liball.a
ar -rc liball.a *.o
gcc -Wall -pedantic -Werror -Wextra -c *.c
