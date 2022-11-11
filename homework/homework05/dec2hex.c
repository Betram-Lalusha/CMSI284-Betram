#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int j = 0;
    long input;
    long quotient;
    long remainder;
    int precision;
    int zeroPadding;
    char hexadec[100];

    if (argc < 3)
    {
        printf(" specify number to convert and precision. Bye");
        return 0;
    }
    else
    {
        input = atol(argv[1]);
        precision = atoi(argv[2]);

        if (precision != 32 && precision != 64)
        {
            printf("precision can only be 32 or 64. Bye");
            return 0;
        }
    }

    quotient = input;

    while (quotient != 0)
    {
        remainder = quotient % 16;
        if (remainder < 10)
            hexadec[j++] = 48 + remainder;
        else
            hexadec[j++] = 55 + remainder;
        quotient /= 16;
    }

    printf("0x");

    if (precision == 32)
    {
        zeroPadding = 8 - j;
    }
    else
    {
        zeroPadding = 16 - j;
    }

    for (int i = zeroPadding; i > 0; i--)
    {
        printf("0");
    }
    for (int i = j; i >= 0; i--)
        printf("%c", hexadec[i]);
    return 0;
}