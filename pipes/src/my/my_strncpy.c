#include "my.h"

/* Same as my_strcpy except:
	Only copies n chars or until the end of src */
char *my_strncpy(char *dst, char *src, int n)
{
    if(!(dst == NULL || src == NULL) && n > 0)
    {
        int i = my_strlen(src);
        if(i < n)
        {
            dst[i] = '\0';
            for(i = i - 1; i >= 0; i--)
            {
                dst[i] = src[i];
            }
        }
        else
        {
            i = n;
            dst[n] = '\0';
            for(i = n - 1; i >= 0; i--)
            {
                dst[i] = src[i];
            }
        }
    }
    if(dst!= NULL && n <= 0) {
        dst[0] = '\0';
    }
    return dst;
}