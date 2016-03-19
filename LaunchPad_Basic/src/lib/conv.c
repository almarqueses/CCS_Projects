

#include "lib.h"




/*!
 *  ======== _itoa ========
 *
 *  @brief  Function that converts a 16 bit number to ASCII
 *
 *  @param  uiNum    The value to be converted to a string.
 *
 *  @param  buf      Pointer to memory where to store the resulting null-terminated string.
 *
 *  @param  uiRadix  Numerical base used to represent the value as a string, between 2 and 36,
 *                   where 10 means decimal base, 16 hexadecimal, 8 octal, and 2 binary.
 *
 * @return  void
 *
 *********************************************************************/
void itoa(unsigned int uiNum, unsigned char *buf, unsigned char uiRadix)
{
    unsigned char c, i;
    unsigned char *p, rst[32];

    p = rst;
    for (i = 0; i < 32; i++, p++)
    {
        /* Isolate a digit */
        c = uiNum % uiRadix;
        /* Convert to Ascii */
        *p = c + ((c < 10) ? '0' : '7');
        uiNum /= uiRadix;
        if (!uiNum)
            break;
    }

    for (c = 0; c <= i; c++)
    {
        /* Reverse character order */
        *buf++ = *p--;
    }
    *buf = '\0';
}

char *ftoa(char *a, double f, int precision)
{
 long p[] = {0,10,100,1000,10000,100000,1000000,10000000,100000000};

 char *ret = a;
 long heiltal = (long)f;
 itoa(heiltal, a, 10);
 while (*a != '\0') a++;
 *a++ = '.';
 long desimal = abs((long)((f - heiltal) * p[precision]));
 itoa(desimal, a, 10);
 return ret;
}
