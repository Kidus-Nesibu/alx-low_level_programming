#!/bin/bash
gcc -Wall -pedantic -Werror -Wextr -c *.c
ar -rc liball.a *.o
ranlib liball.a
