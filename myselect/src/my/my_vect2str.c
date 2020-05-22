#include "my.h"
 // Takes a vector (array of string ended by a NULL)
 // Allocates a new string and copies each string from the array into new string separated by a single space, until NULL pointer to string is found
 // Returns new string
char *my_vect2str(char **x){
if(x == NULL || *x == NULL){
    return NULL;
}
    char* vstr = (char*) malloc(sizeof(*x)+1);
    int k = 0;
    while(x[k] != NULL){
        // my_str("IN \n");
        // my_str(x[k]);
        // my_str("\n");
        int end = my_strlen(vstr);
        int end2 = my_strlen(x[k]);
        // my_str("In length ");
        // my_int(end2);
        // my_str("\n");
        int i = end,j = 0;
        if(!(x[k] == '\0' || vstr == '\0')){
            while(i < end+end2 || j < end2){ //was and
                // my_str("    WHILE\n");
                // my_str("    i ");
                // my_int(i);
                // my_str("\n");
                // my_str("    j ");
                // my_int(j);
                // my_str("\n");
                // my_str("    k ");
                // my_int(k);
                // my_str("\n");
                if(i+1 == end && vstr[i] == '\0'){
                    // my_str("        IF\n");
                    vstr[i] = ' ';
                    i++;
                }
                else{
                    // my_str("        ELSE\n");
                    // my_str("        vstr[i] = ");
                    // my_char(vstr[i]);
                    // my_str("\n");
                    // my_str("        x[k][j] = ");
                    // my_char(x[k][j]);
                    // my_str("\n");
                    vstr[i] = x[k][j];
                    // my_str("        ");
                    // my_str(vstr);
                    // my_str("\n");
                    i++, j++;
                }
            }
            // my_str("        GONNATERMINATE\n");
            vstr[i] = '\0';
            // my_str("        TERMINATE\n");
            k++;
        }
    }
    return vstr;
}
