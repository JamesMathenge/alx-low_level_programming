#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ranlib liball.a
ar -rc liball.a *.o
