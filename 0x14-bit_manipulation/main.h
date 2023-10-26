#ifndef HOLBERTON_H
#define HOLBERTON_H
int _putchar(char c);
unsigned int binary_to_uint(const char *a);
void print_binary(unsigned long int x);
int get_bit(unsigned long int x, unsigned int index);
int set_bit(unsigned long int *x, unsigned int index);
int clear_bit(unsigned long int *x, unsigned int index);
unsigned int flip_bits(unsigned long int x, unsigned long int m);
int get_endianness(void);
#endif
