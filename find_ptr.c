#include <stdlib.h>

char *find_ptr(char * s, char c){
    int i = 0;
    while(s[i]){
        if (s[i] == c){
            return s + i;
        }
        i++;
    }
    return NULL;
}
