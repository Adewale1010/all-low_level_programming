#!/bin/bash
gcc -Wall -pedantic -Weeror -Wextra -c *.c
ar -rc liball.a *o
ranlib liball.o
