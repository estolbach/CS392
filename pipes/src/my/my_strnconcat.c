#include "my.h"


/* Same as my_strconcat except:
Copies all of a and then n chars or length of b */
// char *my_strnconcat(char *a, char *b, int n)
// {
//     if(a == NULL && b == NULL)
//     {
//         return NULL;
//     }
//     if(a == NULL )
//     {
//         char *p = (char *) malloc(n + 1);
//         my_strncpy(p, b, n);
//         return p;
//     }
//     if(b == NULL || n <= 0)
//     {
//         return my_strdup(a);
//     }
//     char *p = (char *) malloc(my_strlen(a) + my_strlen(b) + 1);
//     my_strncpy(p, my_strcat(a, b), (n + my_strlen(a)));
//     return p;
// }

char* my_strnconcat(char *a, char *b, int n){
if(a == NULL && b == NULL){
return NULL;
}
if(a == NULL ){
char *p = (char*) malloc(n + 1);
my_strncpy(p, b, n);
return p;
}
if(b == NULL || n <=0){
return my_strdup(a);
}
char* p = (char *) malloc(my_strlen(a) + my_strlen(b) + 1);
my_strcpy(p, a);
int end = my_strlen(a), end2, i = end,j = 0;;
if (my_strlen(b) < n){
end2 = my_strlen(b);
} else {
end2 = n;
}
while(i < end+end2 && j < end2){
p[i] = b[j];
i++, j++;
}
p[i] = '\0';
return p;
}