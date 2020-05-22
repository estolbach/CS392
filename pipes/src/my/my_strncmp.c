#include "my.h"

/* Same as my_strcmp except:
    Only compares n chars or until the end of a string */
int my_strncmp(char* a, char* b, int n){
    if((a == NULL && b == NULL) || n <= 0){
        return 0;
    }
    if(a == NULL && b != NULL){
        return -1;
    }
    if(a != NULL && b == NULL){
        return 1;
    }
    int i = 0;
    while((a[i] != '\0' && b[i] != '\0') && i != n){
        if(a[i] == b[i]){
            i++;
        } else {
            if(a[i]<b[i]){
                return -1;
            } else {
                return 1;
            }
        }
    } 
    return 0;
}