#ifndef MAIN_H
#define MAIN_H

#include<stddef.h>
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int bn);
int get_bit(unsigned long int no, unsigned int ind);
int set_bit(unsigned long int *no, unsigned int ind);
int clear_bit(unsigned long int *no, unsigned int ind);
unsigned int flip_bits(unsigned long int fn, unsigned long int sn);
int _atoi(const char *a);
int _putchar(char p);
int get_endianness(void);

#endif
