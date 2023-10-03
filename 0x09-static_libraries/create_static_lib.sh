#!/bin/bash
gcc -Wall -pedantic -Werror -Wextr *.c
ar -rc liball.a *.o
ranlib liball.a
