#!/bin/bash
gcc -Wall -Weeror -Wextra -pedantic -c *.c
ar -rc liball.a *o
ranlib liball.o
