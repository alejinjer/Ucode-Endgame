#include "header.h"

char *itoa(int i, char b[])
{
    char const digit[] = "0123456789";
    char *p = b;
    if (i < 0)
    {
        *p++ = '-';
        i *= -1;
    }
    int shifter = i;
    ++p;
    shifter = shifter / 10;
    while (shifter)
    {
        ++p;
        shifter = shifter / 10;
    };
    *p = '\0';
    *--p = digit[i % 10];
    i = i / 10;
    while (i)
    {
        *--p = digit[i % 10];
        i = i / 10;
    };
    return b;
}
