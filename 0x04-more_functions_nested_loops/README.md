# More functions, more nested loops

## Introduction
This repository contains my solutions to the "More functions, more nested loops" project in the C programming language. This project is part of the ALX Software Engineering curriculum and focuses on implementing various functions and nested loop structures in C.

## Contents
The repository includes the following files:

1. **main.h**: This header file contains prototypes of all the functions implemented in this project.

2. **0-isupper.c**: This file contains the implementation of the `int _isupper(int c)` function, which checks for uppercase characters.

3. **1-isdigit.c**: Here, you'll find the code for the `int _isdigit(int c)` function, which checks for digits (0 through 9).

4. **2-mul.c**: This file contains the implementation of the `int mul(int a, int b)` function, which multiplies two integers.

5. **3-print_numbers.c**: Here, you'll find the code for the `void print_numbers(void)` function, which prints the numbers from 0 to 9, followed by a newline.

6. **4-print_most_numbers.c**: This file contains the implementation of the `void print_most_numbers(void)` function, which prints the numbers from 0 to 9 (excluding 2 and 4), followed by a newline.

7. **5-more_numbers.c**: Here, you'll find the code for the `void more_numbers(void)` function, which prints the numbers from 0 to 14 ten times, each followed by a newline.

8. **6-print_line.c**: This file contains the implementation of the `void print_line(int n)` function, which draws a straight line in the terminal using the character `'_'`.

9. **7-print_diagonal.c**: Here, you'll find the code for the `void print_diagonal(int n)` function, which draws a diagonal line on the terminal using the character `'\'`.

10. **8-print_square.c**: This file contains the implementation of the `void print_square(int size)` function, which prints a square of a specified size using the character `'#'`.

11. **9-fizz_buzz.c**: Here, you'll find the code for the `void fizz_buzz(void)` function, which prints the numbers from 1 to 100, but replaces multiples of 3 with "Fizz", multiples of 5 with "Buzz", and multiples of both with "FizzBuzz".

12. **10-print_triangle.c**: This file contains the implementation of the `void print_triangle(int size)` function, which prints a triangle of a specified size using the character `'#'`.

## Usage
To use any of the functions implemented in this project, simply include the `main.h` header file in your C program and call the desired function with the appropriate parameters.

Example:
```c
#include "main.h"

int main(void)
{
    _putchar(_isupper('A') + '0'); /* Should print 1 */
    _putchar('\n');
    return (0);
}

