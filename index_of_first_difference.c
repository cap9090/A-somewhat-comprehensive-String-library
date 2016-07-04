#include <ctype.h>

int index_of_first_difference(char *s1, char * s2){
    int i = -1;
    while(s1[++i]){
        /*ignores case*/
        if(tolower(s1[i]) != tolower(s2[i])) return i;
    }
    return -1;  
}

