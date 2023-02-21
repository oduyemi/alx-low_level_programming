#include "main.h"

        #include <unistd.h>

        /**

         * _putchar - writes the character c to stdout

         * @c: The character to print

         *

         * Return: On success 1.

         * On error, -1 is returned, and errno is set appropriately.

         */

        int _putchar(char c)

        {

                return (write(1, &c, 1));

        }







=====================================



main.h CODE




#ifndef main_h

        #define main_h



        int _putchar(char);

        void print_alphabet(void);

        void print_alphabet_x10(void);

        int _islower(int c);

        int _isalpha(int c);

        int print_sign(int n);

        int _abs(int);

        int print_last_digit(int);

        void jack_bauer(void);

        void times_table(void);

        int add(int, int);

        void print_to_98(int n);

        void print_times_table(int n);



        #endif




=====================================


0-putchar.c CODE



#include "main.h"

        /**

         * main - print _putchar

         * is written by mbah

         * Return: 0

         */



        int main(void)

        {

        _putchar('_');

        _putchar('p');

        _putchar('u');

        _putchar('t');

        _putchar('c');

        _putchar('h');

        _putchar('a');

        _putchar('r');

        _putchar('\n');

        return (0);

        }





=====================================


1-alphabet.c CODE



#include "main.h"



        /**

         * print_alphabet - print all alphabet in lowercase

         */



        void print_alphabet(void)

        {

                char letter;



                for (letter = 'a'; letter <= 'z'; letter++)

                        _putchar(letter);



                _putchar('\n');

        }

