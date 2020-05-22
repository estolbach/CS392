#include "my.h"

/* Compares strings by ascii value character by character, until either or both strings terminate
    if a and b are identical, return 0
    if a < b, return negative number
    if a > b, return positive number
    two NULL are equal
    NULL is always less than a normal string */
int my_strcmp(char *a, char* b){
    if(a == NULL && b == NULL){
        return 0;
    }
    if(a == NULL && b != NULL){
        return -1;
    }
    if(a != NULL && b == NULL){
        return 1;
    }
    int i = 0;
    do{
        if(a[i] == b[i]){
            i++;
        } else {
            if(a[i]<b[i]){
                return -1;
            } else {
                return 1;
            }
        }
    } while(a[i] != '\0' || b[i] != '\0');
    return 0;
}
