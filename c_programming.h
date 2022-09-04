#ifndef C_PRGRAMMING_H
#define C_PROGRAMMING_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int largest_three(int a, int b, int c);
int is_prime(int n);
int sum_of_digits(int n);
char * reverse(char * text);
int count_letter(char * text, char n);
int is_palindrome(char * text);
void temp_info(int * temps);
void bubble_sort(int *temps, int n);
int recursive_factorial(int n);
int linear_search(int *array, int size, int value);
int _strlen(char *s);
#endif
