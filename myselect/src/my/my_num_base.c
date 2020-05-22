#include "my.h"

/* pints a number using the length of the string as the base and the contents as the alphabet.
ex. my_num_base(9, "RTFM") R=0, T=1, F=2, M=3. 9 in base 4 is 21, so result is "FT"
If char* is NULL or empty, print an error message and return
if given unary, repeat alphabet letter the specified number of times
for negative print a "-" then the number */

void my_num_base(int i, char *str)
{

    if(str == NULL || str[0] == '\0')
    {
        char s[] = "ERROR: PLEASE ENTER PROPER ALPHABET!";
        my_str(s);
        return;
    }

    if (i < 0)
    {
        char minus = '-';
        my_char(minus); // print negative sign
        i = i * -1;
    }
    if(str[1] == '\0')
    {
        while(i != 0)
        {
            my_char(str[0]);
            i--;
        }
        return;
    }
    int l = my_strlen(str), temp = i / l, j = 1;
    while (temp != 0)
    {
        temp /= l;
        j *= l;
    }
    do
    {
        int temp2 = (i / j);
        char c = str[temp2];
        if(i == -2147483648){
        	c-=1;
        }
        my_char(c);
        i = i - ((i / j) * j);
        j /= l;
    }
    while (j != 0);
}
