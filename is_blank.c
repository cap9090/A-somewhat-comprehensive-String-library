

#include <stdio.h>

int is_blank(char *s){
    if(s == NULL || *s == '\0')
        return 1;
    int i = 0;
    while(*(s+i)){
        if(!isspace(*(s + i))) return 0; i++;
    }
    return 1;
}

