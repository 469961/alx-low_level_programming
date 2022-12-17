#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
    char c;
    
    c = 'A';
    printf("%c: %d\n", c, _isuppert(c));
    c = 'a';
    printf("%c: %d\n", c, _isuppert(c));
    return (0);
}
