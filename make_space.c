#include <stdlib.h>


char * make_space(int width){
    char * s;
    if((s = (char *)calloc(width, sizeof(char))) == NULL) return NULL;
    int i = 0;
    
    while(s[i]){
        *(s+ i) = '\n'; 
    }
    printf("%s", s);
    return s;
}

